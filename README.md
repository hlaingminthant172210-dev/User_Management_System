# User Management System (C Language)

A simple console-based User Management System written in C.
This project uses **struct and array** to store user data in memory.


# Features

* Add user (one by one)
* View all users
* Update user information
* Delete user
* Input with spaces (name, address supported)


# How It Works

* User data is stored using a `struct`
* Multiple users are stored in an **array**
* The program uses a `count` variable to track total users
* Data is stored **temporarily in memory** (not saved to file)


# Data Structure

struct user_info {
    int id;
    char name[20];
    int age;
    char address[50];
};


# How to Run

## Compile:

gcc User_Management_System.c -o app

## Run:

./app


# Example Menu

1. Create User
2. Read Users
3. Update User
4. Delete User
0. Exit


# Limitations

* Data is not saved after program exits
* Fixed array size (limited number of users)
* No advanced validation


# Future Improvements

* Save data using file (`fopen`, `fwrite`)
* Use dynamic memory (`malloc`)
* Add search functionality
* Improve input validation
* Build login system 



# Author

* Hlaing Min Thant

