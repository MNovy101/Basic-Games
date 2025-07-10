# 🕹️ Basic‑Games

This repository contains personal C++ projects developed while working through ***Beginning C++ Through Game Programming***, 4th Edition by Michael Dawson. The book teaches programming concepts through progressively richer text‑based games.

---

## 🎯 Purpose

* Reinforce core C++ concepts in a fun, game‑centered context.
* Practice writing console applications that grow in complexity—from simple loops to class‑based games.
* Track progress by keeping completed chapter examples and final projects in one place.

---

## 📁 Repository Structure

Each folder corresponds to a book chapter and typically includes:

| Folder          | Chapter & Topics                                               |
| --------------- | -------------------------------------------------------------- |
| `Chapter1/`     | Basics: data types, variables, I/O (e.g., *Lost Fortune*)      |
| `Chapter2/`     | Control flow: branching, loops, game loop (*Guess My Number*)  |
| `Chapter3/`     | Arrays, strings, loops (*Word Jumble*, *Tic-Tac-Toe*)          |
| `Chapter4/`     | STL: vectors, iterators (*Hangman*)                            |
| …               | Continuing through functions, classes, pointers, OOP, etc.     |
| `FinalProject/` | Culminating game that ties together all concepts from the book |

*Current Progress is only through Chapter 2*

---

## 🚀 Running the Games

1. **Install a C++ compiler:**

   * **Windows:** MinGW‑w64 (via MSYS2) or Visual Studio Build Tools
   * **macOS/Linux:** `g++` or `clang++` via your package manager

2. **Open a terminal** in VS Code or your shell and navigate to a chapter folder:

   ```bash
   cd Chapter1
   ```

3. **Compile** the source file:

   ```bash
   g++ -std=c++17 LostFortune.cpp -o LostFortune
   ```

4. **Run** the executable:

   ```bash
   ./LostFortune       # macOS/Linux
   .\LostFortune.exe   # Windows
   ```

Repeat for other source files in each chapter directory.

---

## 📚 About the Book

* **Title:** Beginning C++ Through Game Programming (4th Edition)
* **Author:** Michael Dawson
* **Focus:** Teaching C++ fundamentals via console‑based game development, with a complete project each chapter.

---

## ✅ What’s Covered

* **Variables** & **data types**
* **Control structures:** `if`, `switch`, loops
* **Functions** & **recursion**
* **Arrays**, **strings**, **vectors** (STL)
* **Pointers**, **references**, **dynamic memory**
* **Object-oriented programming:** classes, inheritance, polymorphism
* **Final integrated game** tying together all learned concepts

---

## 🛠️ Extending the Projects

* Refactor game logic into reusable **classes** or **modules**.
* Add features like **file I/O**, **save/load** functionality, or **AI opponents**.
* Transition from console to a graphics library such as **SFML** or **SDL**.
* Adopt modern C++ standards (C++17, C++20) and explore new language features.

---

## ❓ Questions or Feedback?

Feel free to open an issue or submit a pull request if you’d like to suggest improvements, request new features, or discuss converting these console games into graphical versions. I’d love to hear your thoughts!

---

### 📎 References

* Book details: [https://www.delmarlearning.com/browse\_product\_detail.aspx?ISBN=1305109910](https://www.delmarlearning.com/browse_product_detail.aspx?ISBN=1305109910)
* Community examples and discussions: [https://cplusplus.com/forum/beginner/281244/](https://cplusplus.com/forum/beginner/281244/)
