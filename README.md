# 🚀 Student Structure Program in C++

This program demonstrates the use of `struct` in C++ to store and manage student details, including roll number, name, and age. It includes functions for reading input from the user and printing the stored data.

## 📌 Features  
- Uses a `struct` instead of a `class`, making all members public by default.  
- Includes a function to take input (`read()`) and another to display details (`print()`).  
- Demonstrates how object initialization works in C++.  
- Shows what happens when only partial values are assigned to a struct object.  

## 🛠 How It Works  
- The program defines a `struct` named `Student` with three attributes:  
  - **Roll Number** (`int`)  
  - **Name** (`string`)  
  - **Age** (`int`)  
- It has two member functions:  
  - `read()`: Takes user input for roll number, name, and age.  
  - `print()`: Displays the stored details.  
- In `main()`, an object of `Student` is created and **partially initialized** with only a roll number, leaving the name and age **uninitialized**, which results in **garbage values**.  

## ⚠ Key Points to Remember  
- If only part of a struct is initialized, unassigned variables may hold **garbage values**.  
- The correct way to initialize all attributes is by assigning values in the correct sequence.  
- Using `cin >> name;` only captures a **single word**, so for **full names**, `getline()` should be used.  

## 🔥 Conclusion  
This program is a simple yet effective demonstration of `struct` usage, object initialization, and the importance of correctly assigning values to avoid unintended behavior.  

---

### 📂 How to Use  
1. **Clone the repository**  
   ```sh
   git clone https://github.com/your-username/student-struct.git
   cd student-struct





   
### ✅ **How to Use It**  
- Copy and paste this content into a file named `README.md` in your GitHub repository.  
- Replace `"your-username"` with your actual GitHub username in the `git clone` command.  

Let me know if you need any modifications! 🚀😊

