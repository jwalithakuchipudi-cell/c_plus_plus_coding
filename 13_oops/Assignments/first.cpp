/*
============================================================
Classes to Design:
1. Student
2. Book
3. Building
============================================================
*/

/*
============================================================
ASSIGNMENT 1: CLASS STUDENT
============================================================

Create a class named Student.

Private Data Members:
- studentName
- rollNumber
- marks
- grade

Public Member Functions:
- setStudentName()
- getStudentName()
- setRollNumber()
- getRollNumber()
- setMarks()
    Validation:
    marks must be between 0 and 100
- getMarks()
- calculateGrade()
    Rules:
    90-100 : A
    75-89  : B
    60-74  : C
    40-59  : D
    <40    : Fail
- displayStudentInfo()

Main Function Requirements:
- Create 3 student objects
- Set values using setters
- Calculate grade for each student
- Display all student details
- Print memory address of each object
============================================================
*/

/*
============================================================
ASSIGNMENT 2: CLASS BOOK
============================================================

Create a class named Book.

Private Data Members:
- bookTitle
- authorName
- price
- isAvailable

Public Member Functions:
- setBookTitle()
- getBookTitle()
- setAuthorName()
- getAuthorName()
- setPrice()
    Validation:
    price cannot be negative
- getPrice()
- issueBook()
    If available then mark unavailable
- returnBook()
    Mark book available
- displayBookInfo()

Main Function Requirements:
- Create 2 books
- Set book details
- Issue first book
- Try issuing same book again
- Return the book
- Display final status
============================================================
*/

/*
============================================================
ASSIGNMENT 3: CLASS BUILDING
============================================================

Create a class named Building.

Private Data Members:
- buildingName
- totalFloors
- totalRooms
- occupiedRooms

Public Member Functions:
- setBuildingName()
- getBuildingName()
- setTotalFloors()
- getTotalFloors()
- setTotalRooms()
- getTotalRooms()
- occupyRoom()
    Increase occupied rooms
    Should not exceed total rooms
- vacateRoom()
    Decrease occupied rooms
    Should not go below zero
- getAvailableRooms()
    return totalRooms - occupiedRooms
- displayBuildingInfo()

Main Function Requirements:
- Create one Building object
- Initialize building details
- Occupy some rooms
- Vacate some rooms
- Print available rooms
- Display full building information
============================================================
*/