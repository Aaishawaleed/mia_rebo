import os
import pygame as pg
screen = pg.display.set_mode((800, 800))
pg.display.set_caption("chess")



width = 100
height = 100

light_blue = (0, 102, 114)
light_gray = (211, 211, 211)

kB = pg.image.load("chess\kingB.png")
qB = pg.image.load("chess/queenB.png")
rB = pg.image.load("chess/rookB.png")
pB = pg.image.load("chess/pawnB.png")
bB = pg.image.load("chess/bishopB.png")
knB = pg.image.load("chess/knightB.png")
kW = pg.image.load("chess/kingW.png")
qW = pg.image.load("chess/queenW.png")
rW = pg.image.load("chess/rookW.png")
pW = pg.image.load("chess/pawnW.png")
bW = pg.image.load("chess/bishopW.png")
knW = pg.image.load("chess/knightW.png")  

pawn_positionW = [[1, i] for i in range(8)] 

#pawn_positionB = [[6, J] for J in range(8)]

def black_pieces():
    screen.blit(kB, (410, 710))
    screen.blit(qB, (310, 710))
    screen.blit(bB, (210, 710))
    screen.blit(bB, (510, 710))
    screen.blit(knB, (610, 710))
    screen.blit(knB, (110, 710))
    screen.blit(rB, (710, 710))
    screen.blit(rB, (10, 710))
    i = 10
    while(i < 800):
        screen.blit(pB, (i, 610))
        i += 100


def white_pieces():
    screen.blit(kW, (410, 10))
    screen.blit(qW, (310, 10))
    screen.blit(bW, (210, 10))
    screen.blit(bW, (510, 10))
    screen.blit(knW, (610, 10))
    screen.blit(knW, (110, 10))
    screen.blit(rW, (710, 10))
    screen.blit(rW, (10, 10))
    i = 10
    while(i < 800):
        screen.blit(pW, (i, 110))
        i += 100

def draw_board():
    x = 0
    y = 0
    for i in range(8):
        for j in range(8):
            pg.draw.rect(screen, light_blue, (x, y, width, height))
            x += 100
            pg.draw.rect(screen, light_gray, (x, y, width, height))
            x += 100
            if(x > 800):
               x = 0
               y += 100
               if(i % 2 != 0):
                   break
               else:
                    pg.draw.rect(screen, light_gray, (x, y, width, height))
                    x = 100
            if(y >= 800 and x >= 800):
               break



while True:
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            quit()
    
    draw_board()
    black_pieces()
    white_pieces()

    pg.display.update()
    pg.time.delay(100)
    
    
