# Caesar Cipher

This project is a basic implementation of the Caesar cipher encryption algorithm, developed in C

## 🔍 Overview

The program encrypts a user-provided message by shifting each alphabetical character by a fixed number of positions (the **key**) in the alphabet. It preserves the case of each letter and leaves all non-alphabetical characters unchanged.

## 🛠️ How to Use

1. **Compile the program:**
   ```bash
   make caesar
   ```

2. **Run the program with a numeric key:**
   ```bash
   ./caesar <key>
   ```

   Example:
   ```bash
   ./caesar 3
   plaintext: Hello, World!
   ciphertext: Khoor, Zruog!
   ```

3. **Invalid input handling:**
   If the key is missing or contains non-numeric characters, the program displays:
   ```
   Usage: ./caesar key
   ```

## 🧠 Functionality

- `main()` handles command-line input, prompts the user for plaintext, and performs the encryption.
- `checker(string a)` verifies that the provided key contains only digits (i.e., is a valid non-negative integer).

## ⚠️ Notes

- Only non-negative integers are supported as keys.
- The encryption wraps around the alphabet using modulo 26 arithmetic.
- Non-alphabetic characters (such as punctuation and numbers) are not modified.

## 📄 License

This code is released for educational purposes and may be freely used or modified with attribution.



