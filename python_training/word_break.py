n = 6
s = "isamlike"
dictionary = ["i", "like", "sam", "sung", "samsung", "mobile"]

def word_break(n, s, dictionary):
    words = ''
    m = 0
    par = 0
    for i in range(0, n):
        print('palavra', i + 1,':', dictionary[i])
        for j in range(0, len(s)):
            if len(dictionary[i]) - m + j > len(s[m + j:]):
                break
            word = s[m + j: m + j + len(dictionary[i])]
            print('str:', word)
            if word == dictionary[i]:
                if par == 0:
                    words += word
                    par = 1
                else:
                    words += ' ' + word
                m += j + 1
                print('word: ', words)
                break
    return words

print(word_break(n, s, dictionary))