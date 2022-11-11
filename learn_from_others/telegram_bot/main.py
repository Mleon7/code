import telegram.ext
# import pandas_datareader as web

with open('token.txt', 'r') as f:
    TOKEN = f.read()

def start(update, context):
    update.message.reply_text("Hello! Welcome To mleon7_bot!")

def help(update, context):
    update.message.reply_text("""
    The following commands are available:

    /start -> Welcome Message
    /help -> This Message
    /leap -> /leap year (/leap 202)
    /days -> /days year month (/days 2022 11)
    """)


# def stock(update, context):
#     ticker = context.args[0] 
#     data = web.DataReader(ticker, 'yahoo')
#     price = data.iloc[-1]['Close']
#     update.message.reply_text(f"The current price of {ticker} is {price:.2f}$!")

# learn: 表驱动法；判断某年某月有多少天。

def is_leap(year):
    if (((year%4 == 0) and (year%100 != 0)) or (year%400 == 0)):
        return True
    else:
        return False
def leap(update, context):
    year = context.args[0]
    year = int(year)
    if is_leap(year):
        update.message.reply_text(f"{year} 是闰年")
    else:
        update.message.reply_text(f"{year} 不是闰年")

def days(update, context):
    year = context.args[0]
    year = int(year)
    month = context.args[1]
    month = int(month)
    days = (31, 29 if is_leap(year) else 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31)
    update.message.reply_text(f"year: {year}, month: {month}, days: {days[month - 1]}")

def handle_message(update, context):
    update.message.reply_text(f"You said {update.message.text}")

updater = telegram.ext.Updater(TOKEN, use_context=True)
disp = updater.dispatcher

disp.add_handler(telegram.ext.CommandHandler("Start", start))
disp.add_handler(telegram.ext.CommandHandler("help", help))
# disp.add_handler(telegram.ext.CommandHandler("stock", stock))
disp.add_handler(telegram.ext.CommandHandler("leap", leap))
disp.add_handler(telegram.ext.CommandHandler("days", days))
disp.add_handler(telegram.ext.MessageHandler(telegram.ext.Filters.text, handle_message))


updater.start_polling()
updater.idle()
