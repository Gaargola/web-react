import pygame
import numpy as np

pygame.init()

#ancho y alto de la pantalla
width, height = 500,500
# creacion de la pantalla
screen = pygame.display.set_mode((height,width))

#color del fondo
bg = 25, 25, 25
#pintar el fondo con el color asignado
screen.fill(bg)

nxC, nyC = 25, 25

dimCW = width / nxC
dimCH = height / nyC

#Estados de las celdas. Vivas =  1, Muertas = 0.
gameState = np.zeros((nxC, nyC))



# bucle infinito para ejecucion
while True:
    
    for y in range(0, nxC):
        for x in range(0, nyC):
            
            #Calculamos el numero de vecinos cercanos.
            n_neigh=gameState[(x - 1) % nxC, (y - 1) % nyC] + \
                    gameState[(x)     % nxC, (y - 1) % nyC] + \
                    gameState[(x + 1) % nxC, (y - 1) % nyC] + \
                    gameState[(x - 1) % nxC, (y)     % nyC] + \
                    gameState[(x + 1) % nxC, (y)     % nyC] + \
                    gameState[(x - 1) % nxC, (y + 1) % nyC] + \
                    gameState[(x)     % nxC, (y + 1) % nyC] + \
                    gameState[(x + 1) % nxC, (y + 1) % nyC]
            #Rule #1: Una celda muerta con exactamaente 3 vencionas vivas, " revive"
            if gameState[x, y] == 0:
                    pass
                    
            #Celdas del poligono
            poly = [((x) * dimCW, y * dimCH),
                    ((x+1) * dimCW, y * dimCH),
                    ((x+1) * dimCW, (y+1) * dimCH),
                    ((x) * dimCW, (y+1) * dimCH)]
            #dibujamos la celda para cada par de x e y
            pygame.draw.polygon(screen, (128, 128 ,128), poly, 1)
            
    pygame.display.flip()
