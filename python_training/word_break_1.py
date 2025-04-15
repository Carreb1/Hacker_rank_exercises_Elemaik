# -------------------------
n = 6
s = "likesams"
dictionary = { "i", "like", "sam", "sung", "samsung", "mobile"}

def word_break(s, dictionary):
    dp = [0] * (len(s) + 1)
    dp[0] = 1
    for i in range(0, len(s) + 1):
        for j in range(0, i):
            if dp[j] == 1 and s[j:i] in dictionary:
                dp[i] = 1
                break

    return dp[len(s)]


    
print(word_break(s, dictionary))

