import itertools
def find_anagrams(word):
    # Generate all permutations of the word
    permutations = set(itertools.permutations(word))
    
    # Convert permutations from tuples back to strings
    anagrams = [''.join(p) for p in permutations]
    
    return anagrams

# Test the function
word = "listen"
anagrams = find_anagrams(word)
print(f"Anagrams of '{word}': {anagrams}")
