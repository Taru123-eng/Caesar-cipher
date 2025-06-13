# Caesar Cipher (CS50)

A simple Caesar cipher encryption tool written in C.

## 🔍 Description

Encrypts user input using a Caesar cipher with a numeric key. Alphabetical characters are shifted while preserving case; non-alphabetical characters remain unchanged.

## ⚙️ Usage

### Compile:
```bash
make caesar
```

### Run:
```bash
./caesar <key>
```

Example:
```bash
./caesar 3
plaintext: Hello, World!
ciphertext: Khoor, Zruog!
```

## 🚫 Invalid Input

If no key or a non-numeric key is provided:
```
Usage: ./caesar key
```

## 🧠 Functions

- `main()` – Handles input, calls `checker()`, performs encryption.
- `checker(string a)` – Returns `true` if the key is invalid (i.e., contains letters).

## ✅ Notes

- Only supports non-negative integers as keys.
- Shifts wrap using modulo 26.
