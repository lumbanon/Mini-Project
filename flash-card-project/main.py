from tkinter import *
import pandas
import random


##Read data
try:
    card_data = pandas.read_csv("data/words_to_learn.csv")
except FileNotFoundError:
    card_data = pandas.read_csv("data/bulgarian_words.csv")

words = card_data.to_dict(orient="records")
random_bulgarian = {}
BACKGROUND_COLOR = "#B1DDC6"
window=Tk()
window.title("Flash Card")
window.config(padx=50, pady=50, bg=BACKGROUND_COLOR)
card_back_image=PhotoImage(file="images/card_back.png")
canvas = Canvas(width=800, height=526, bg="white",
                highlightthickness=0)
def known_word():
    words.remove(random_bulgarian)
    pandas.DataFrame(words).to_csv("data/words_to_learn.csv", index=False)
    generate_action()
def generate_action():
    global random_bulgarian
    canvas.itemconfig(old_image, image=card_front_image)
    random_bulgarian=random.choice(words)
    canvas.itemconfig(title_text, text="Bulgarian",fill="black")
    canvas.itemconfig(word_text,text=random_bulgarian["Bulgarian"],fill="black")
    window.after(3000,flip_card)

def flip_card():
    canvas.itemconfig(title_text, text="English",fill="white")
    canvas.itemconfig(word_text, text=random_bulgarian["English"],fill="white")
    canvas.itemconfig(old_image, image=card_back_image)

card_front_image=PhotoImage(file="images/card_front.png")
old_image=canvas.create_image(400, 263, image=card_front_image)
title_text=canvas.create_text(400,150,text="",font=("Ariel",40,"italic"))
word_text=canvas.create_text(400,263,text="",font=("Ariel",60,"bold"))
canvas.grid(row=0, column=0,columnspan=2)
canvas.config(bg=BACKGROUND_COLOR)
correct_image=PhotoImage(file="images/right.png")
wrong_image=PhotoImage(file="images/wrong.png")
correct_button = Button(image=correct_image,highlightthickness=0,command=known_word)
correct_button.grid(row=1, column=0)
correct_button.config(bg=BACKGROUND_COLOR)
wrong_button = Button(image=wrong_image,highlightthickness=0,command=generate_action)
wrong_button.grid(row=1, column=1)
wrong_button.config(bg=BACKGROUND_COLOR)


generate_action()
window.mainloop()