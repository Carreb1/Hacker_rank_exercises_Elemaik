n = 6
s = "ilikesamsung"
dictionary = ["i", "like", "sam", "sung", "samsung", "mobile"]

def word_break(n, s, dictionary):
    words = ''
    m = 0
    par = 0
    j = 0
    while j < len(s):
        for i in range(0, n):
            word = s[j: j + len(dictionary[i])]
            print('word: ', word)
            print('dictionary: ', dictionary[i])
            if word == dictionary[i]:
                if par == 0:
                    words += word
                    par = 1
                else:
                    words += ' ' + word
                print('palavras: ', words)
                j += len(dictionary[i])
                print(j)
                break
    return words

def word_break_2(n, s, dictionary):
    words = ''
    for i in range(0, n):
        dictionary2 = dictionary[:i] + dictionary[i+1:]
        words += '(' + word_break(n, s, dictionary2) + ')'
    return


print(word_break_2(n, s, dictionary))