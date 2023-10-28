#!/usr/bin/env python3
#problem/solution experimentation

"""
this is an implementation of the gameshow
probability problem
----
if there are three doors with a reward behind one of them
and a player is asked to pick one, and the gamehost can open
one of the unopened doors and present the choice to switch choices,
calculate the probability of winning in these two instances
1. sticking with current choice
2. switching the choice
"""

from random import randint
import numpy as np

if __name__ == "__main__":
    choices = {'A':0, 'B':0, 'C':0}
    x = [1,2,3]
    randseed = 0
    opened = ''
    choice = ''

    #gamechoice function
    def gamechoice():
        """
        contains the choices, can only be called by the gamehost
        """
        randseed = randint(1, 21)

        def shuffle_choices():
            np.random.seed(randseed)
            np.random.shuffle(x)

            idx = 0
            for k in choices.keys():
                choices[k] = x[idx]
                idx += 1

        #shuffle choices
        shuffle_choices()

    #gamehost function
    def gamehost(op, sw):
        """
        this manages and recieves calls from the player
        """
        def update_choices(opened):
            if opened != '':
                choices.pop(opened)
                print(f"updated --> {choices}")
        def open_wrong(choices):
            for k in choices.keys():
                if choices[k] != 1:
                    opened = k
            print(opened)
            return opened

        def switch_choice(loc_choice):
            update_choices(opened)
            if loc_choice == list(choices.keys())[0]:
                loc_choice = list(choices.keys())[1]
            elif loc_choice == list(choices.keys())[1]:
                loc_choice = list(choices.keys())[0]
            return loc_choice    
        if op == 1:
            opened = open_wrong(choices)
        elif sw == 1:
            switch_choice(choice)


    #program main body
    gamechoice()
    print("This is the gameshow problem\nyou have three choices -> A -- B -- C")
    choice = input("make your choice player: ")

    gamehost(1, 0)
    reask = input(f"choice {opened} is wrong, do you want to change your choice\nEnter y/n: ")
    if reask == "y":
        gamehost(0,1)
    else:
        gamehost(0,0)

    if choices[choice] == 1:
        print('you won the game!')
        print(choices, choice)
    else:
        print('you lost the game!')
        print(choices)
