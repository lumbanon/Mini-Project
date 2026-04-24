# Flash Card App (Python)

This repository contains a simple flashcard application built with Python and Tkinter for learning vocabulary.

---

## **Description**

This is a desktop-based flashcard app where users can learn words by flipping cards from one language to another. The app automatically shows a word and reveals its translation after a short delay.

The project demonstrates basic Python programming concepts such as **GUI development**, **file handling**, and **data manipulation using pandas**.

---

## **Features**

- Random word generation from a dataset  
- Automatic card flip after 3 seconds  
- Mark words as known to remove them from future sessions  
- Progress saving using CSV files  
- Simple and clean graphical interface  
- Supports **any language** (by editing the CSV file)  

---

## **How to Run**

1. Install dependencies:

```bash
pip install pandas
2. Run the program:
python main.py
Custom Language

3. You can use any language by editing the CSV file:

data/bulgarian_words.csv

Example format:

Bulgarian,English
Hola,Hello
Bonjour,Hello
你好,Hello

Note: Make sure the column names match the ones used in the code.
