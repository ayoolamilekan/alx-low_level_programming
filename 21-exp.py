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

    gamechoice()

    print("This is the gameshow problem\nyou have three choices -> A -- B -- C")
    choice = input("make your choice player: ")

    gamehost(1, 0)
    reask = input(f"choice {opened} is wrong, do you want to change your choice\nEnter y/n")
    if reask == y:
        gamehost(0,1)
    else:
        gamehost(0,0)

    if choices[choice] == 1:
        print('you won the gameshow!')
    #gamehost function
    def gamehost(op, sw):
        """
        this manages and recieves calls from the player
        """
        if op == 1:
            open_wrong()
        elif sw == 1:
            switch_choice()

        def update_choices():
            if opened != '':
                choices.pop(opened)
                
        def open_wrong():
            for k in choices.keys():
                if choices[k] != 1:
                    opened = k

        def switch_choice():
            update_choices()
            if choice == choices.keys()[0]:
                choice = choices.keys()[1]
            elif choice == choices.keys()[1]:
                choice = choices.keys()[0]
            return choice    

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
                doors[k] = x[idx]
                idx += 1
