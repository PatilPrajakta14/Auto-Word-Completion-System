# Auto Word Completion System using Trie

This project is a simple C++ implementation of an auto word completion system using the Trie data structure. It demonstrates how to insert words into a trie, search for prefixes, and generate auto-completion suggestions based on user input.

## Features

- **Trie Data Structure:** Efficiently stores words with a node per character.
- **Word Insertion:** Insert any number of words into the trie.
- **Auto Completion:** Search for a given prefix and display all matching word suggestions.
- **Interactive Console Application:** Simple menu-driven interface for inserting and searching words.

## How It Works

- **Insertion:** The program builds the trie by reading words from the user and inserting each character into the trie nodes.
- **Search:** When a prefix is entered, the program traverses the trie to find the matching node and then retrieves all possible words (suggestions) that have that prefix.
- **Output:** Suggestions are printed to the console. If no suggestions are found, a message is displayed.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., `g++`)

### Compilation

To compile the program, run:

```bash
g++ trie.cpp -o trie
