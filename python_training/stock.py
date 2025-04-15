def stock(price):
    dp = 0
    for i in range(0, len(price) - 1):
        for j in range(i + 1, len(price)):
            if price[j] - price[i] > dp:
                dp = price[j] - price[i]
    return dp

def stock2(prices):
    min = prices[0]
    max = 0

    for price in prices:
        if price < min:
            min = price
        lucro = price - min
        if lucro > max:
            max = lucro

    return lucro


prices = [1, 3, 6, 9, 11]

print(stock2(prices))
        