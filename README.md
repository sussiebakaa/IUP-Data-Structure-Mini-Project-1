# IUP-Data-Structure-Mini-Project-1

- Name: Vania Aisha Rohmawati
- Student ID: 5025251160

## Prikitiw Library (Test Case)
One day in a quiet little town, there stood a library called the Prikitiw Library. This library had been around for a long time and was known by the locals as a comfortable place to read. However, behind its comfort lay a major problem that had been allowed to drag on for too long: everything was still recorded manually in notebooks.
Mr. Rudi, the library director, has to run back and forth every day. On one hand, he has to keep track of who is waiting in line to borrow books. On the other hand, he needs to remember which books have just been returned. Not to mention the book shelves, which are often in disarray because there is no clear system regarding which books should be placed in front or in the back.

Finally, Mr. Rudi asked you to help him create a book borrowing data documentation system for the library, which has 7 commands:

1. Add a new book to the shelf
  - There are 2 options for adding a book: Option 1 places the book in the priority section, Option 2 places the book in the regular section.
2. Lend a book to a visitor
  - Retrieve books from the book database to lend to library visitors.
3. Register visitors who wish to borrow books into the waiting list
  - Record visitors who wish to borrow books.
4. Serve the next borrower in order of arrival, 
  - Serve borrowers in the order of arrival; whoever arrives first is served first.
5. Recording every returned book
  - Recording books returned by visitors in the return history.
6. Undoing the last return entry if an input error occurs
  - Undoing the book return entry.
7. Viewing the overall system status
  - Displaying the list of books on the shelves, the borrower queue, and the return history.

## Case Explanation
This system was created to replace manual record-keeping with a structured system using:
- Deque for the bookshelf  
- Queue for the borrower queue  
- A stack for the return history  

## Implementation
The program is implemented using the C++ language with the following data structures:
- Deque = for book management (front & back)  
- Queue = for the visitor queue  
- Stack = for return undo  


Translated with DeepL.com (free version)
