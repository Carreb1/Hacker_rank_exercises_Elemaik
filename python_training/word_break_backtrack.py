def word_break(s, wordDict):
    memo = {}
    word_set = set(wordDict)  # transforma em set para busca rápida

    def backtrack(start):
        if start in memo:
            return memo[start]  # já resolvemos essa parte antes

        if start == len(s):
            return [""]  # chegamos ao fim da string com sucesso

        sentences = []

        for end in range(start + 1, len(s) + 1):
            word = s[start:end]
            if word in word_set:
                for sub in backtrack(end):
                    sentence = word + (" " + sub if sub else "")
                    sentences.append(sentence)

        memo[start] = sentences
        return sentences

    return backtrack(0)

s1 = "catsanddog"
dict1 = ["cats", "cat", "and", "sand", "dog"]
print(word_break(s1, dict1))
# Output: ['cat sand dog', 'cats and dog']

s2 = "catsandog"
dict2 = ["cats", "cat", "and", "sand", "dog"]
print(word_break(s2, dict2))
# Output: []
