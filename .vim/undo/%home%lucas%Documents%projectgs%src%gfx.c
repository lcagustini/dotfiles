Vim�UnDo� �Mt�w��H��`qT����?��AjyOT�   H   B    sprites[1][2] = loadTexture("gfx/rayquazaRight1.png", screen);            L       L   L   L    Y�
    _�                             ����                                                                                                                                                                                                                                                                                                                                                             Y�o�     �                   �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             Y�o�     �                  5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             Y�o�     �          :       �          9    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             Y�o�     �          ;       5�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                             Y�o�    �          ;      #include ""5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             Y�pc    �         ;    �         ;    5�_�                    (        ����                                                                                                                                                                                                                                                                                                                                                             Y�p�     �   (   -   E    �   (   )   E    5�_�      	              (        ����                                                                                                                                                                                                                                                                                                                                                             Y�p�    �   (   *   I    5�_�                 	          ����                                                                                                                                                                                                                                                                                                                                                             Y��   	 �         J      9    sprites[0] = loadSprite("gfx/blastoise.png", screen);5�_�   	      
          B   3    ����                                                                                                                                                                                                                                                                                                                                                             Y��V    �   A   C   J      9    opt = SDL_ConvertSurface(load, screen->format, NULL);5�_�                    /        ����                                                                                                                                                                                                                                                                                                                            /           9           V        Y��t    �   .   /          9SDL_Surface *loadSprite(char *path, SDL_Surface *screen){       SDL_Surface *load = NULL;           load = IMG_Load(path);       if(load == NULL){   N        printf("Unable to load image! SDL_image Error: %s\n", IMG_GetError());           return NULL;       }       return load;   }    5�_�                          ����                                                                                                                                                                                                                                                                                                                            /           /           V        Y��~     �         ?      7    textures[0] = loadTexture("gfx/brick.png", screen);5�_�                           ����                                                                                                                                                                                                                                                                                                                            /           /           V        Y��~     �         ?      6    textures[1] = loadTexture("gfx/wood.png", screen);5�_�                           ����                                                                                                                                                                                                                                                                                                                            /           /           V        Y��     �      	   ?      7    textures[2] = loadTexture("gfx/stone.png", screen);5�_�                    	       ����                                                                                                                                                                                                                                                                                                                            /           /           V        Y�ǀ     �      
   ?      6    textures[3] = loadTexture("gfx/sand.png", screen);5�_�                    
       ����                                                                                                                                                                                                                                                                                                                            /           /           V        Y�ǀ     �   	      ?      9    textures[4] = loadTexture("gfx/pumpkin.png", screen);5�_�                           ����                                                                                                                                                                                                                                                                                                                            /           /           V        Y�Ǎ     �         ?    �         ?    5�_�                           ����                                                                                                                                                                                                                                                                                                                            0           0           V        Y�Ǐ     �      	   @    �         @    5�_�                           ����                                                                                                                                                                                                                                                                                                                            1           1           V        Y�Ǖ     �         A      7    textures[2] = loadTexture("gfx/brick.png", screen);5�_�                           ����                                                                                                                                                                                                                                                                                                                            1           1           V        Y�Ǘ    �         A      7    textures[2] = loadTexture("gfx/brick.png", screen);5�_�                       #    ����                                                                                                                                                                                                                                                                                                                            1           1           V        Y��A     �         A      7    textures[1] = loadTexture("gfx/brick.png", screen);5�_�                       #    ����                                                                                                                                                                                                                                                                                                                            1           1           V        Y��E     �         A      7    textures[0] = loadTexture("gfx/brick.png", screen);5�_�                       )    ����                                                                                                                                                                                                                                                                                                                            1           1           V        Y��F     �         A      7    textures[0] = loadTexture("gfx/floor.png", screen);5�_�                       )    ����                                                                                                                                                                                                                                                                                                                            1           1           V        Y��J    �         A      7    textures[1] = loadTexture("gfx/floor.png", screen);5�_�                       #    ����                                                                                                                                                                                                                                                                                                                            1           1           V        Y��w    �         A      7    textures[1] = loadTexture("gfx/floor.jpg", screen);5�_�                         �    ����                                                                                                                                                                                                                                                                                                                            1           1           V        Y���    �      !   A      �    window = SDL_CreateWindow("projectgs", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);5�_�      !                   �    ����                                                                                                                                                                                                                                                                                                                            1           1           V        Y��m     �      !   A      �    window = SDL_CreateWindow("projectgs", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN | SDL_WINDOW_FULLSCREEN);5�_�       "           !       �    ����                                                                                                                                                                                                                                                                                                                            1           1           V        Y��q    �      !   A      �    window = SDL_CreateWindow("projectgs", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN | SDL_WINDOW_FULLSCREEN*/);5�_�   !   #           "       �    ����                                                                                                                                                                                                                                                                                                                            1           1           V        Y�ܐ     �      !   A      �    window = SDL_CreateWindow("projectgs", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN | /*SDL_WINDOW_FULLSCREEN*/);5�_�   "   $           #       �    ����                                                                                                                                                                                                                                                                                                                            1           1           V        Y�ܐ     �      !   A      �    window = SDL_CreateWindow("projectgs", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN | /SDL_WINDOW_FULLSCREEN*/);5�_�   #   %           $       �    ����                                                                                                                                                                                                                                                                                                                            1           1           V        Y�ܒ    �      !   A      �    window = SDL_CreateWindow("projectgs", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN | SDL_WINDOW_FULLSCREEN*/);5�_�   $   &           %       �    ����                                                                                                                                                                                                                                                                                                                                                             Y��     �      !   A      �    window = SDL_CreateWindow("projectgs", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN /*| SDL_WINDOW_FULLSCREEN*/);5�_�   %   '           &       �    ����                                                                                                                                                                                                                                                                                                                                                             Y��     �      !   A      �    window = SDL_CreateWindow("projectgs", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN /*| SDL_WINDOW_FULLSCREEN/);5�_�   &   (           '       �    ����                                                                                                                                                                                                                                                                                                                                                             Y��     �      !   A      �    window = SDL_CreateWindow("projectgs", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN /*| SDL_WINDOW_FULLSCREEN);5�_�   '   )           (       �    ����                                                                                                                                                                                                                                                                                                                                                             Y��    �      !   A      �    window = SDL_CreateWindow("projectgs", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN *| SDL_WINDOW_FULLSCREEN);5�_�   (   *           )          ����                                                                                                                                                                                                                                                                                                                                                             Y��     �         A    �         A    5�_�   )   +           *          ����                                                                                                                                                                                                                                                                                                                                                             Y��     �         B      :    sprites[0] = loadTexture("gfx/blastoise.png", screen);5�_�   *   ,           +      "    ����                                                                                                                                                                                                                                                                                                                                                             Y�    �         B      :    sprites[1] = loadTexture("gfx/blastoise.png", screen);5�_�   +   -           ,   !   �    ����                                                                                                                                                                                                                                                                                                                                                             Y��     �       "   B      �    window = SDL_CreateWindow("projectgs", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN | SDL_WINDOW_FULLSCREEN);5�_�   ,   2           -   !   �    ����                                                                                                                                                                                                                                                                                                                                                             Y��    �       "   B      �    window = SDL_CreateWindow("projectgs", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN /*| SDL_WINDOW_FULLSCREEN);5�_�   -   3   .       2      3    ����                                                                                                                                                                                                                                                                                                                                                             Y��     �         B      Qvoid initGfx(SDL_Surface **textures, SDL_Surface **sprites, SDL_Surface *screen){5�_�   2   4           3          ����                                                                                                                                                                                                                                                                                                                                                             Y��     �         B      :    sprites[0] = loadTexture("gfx/blastoise.png", screen);5�_�   3   5           4          ����                                                                                                                                                                                                                                                                                                                                                             Y��     �         B    �         B    5�_�   4   6           5          ����                                                                                                                                                                                                                                                                                                                                                             Y��     �         C    �         C    5�_�   5   7           6          ����                                                                                                                                                                                                                                                                                                                                                             Y��     �         D    �         D    5�_�   6   8           7          ����                                                                                                                                                                                                                                                                                                                                                             Y��     �         E      =    sprites[0][0] = loadTexture("gfx/blastoise.png", screen);5�_�   7   9           8          ����                                                                                                                                                                                                                                                                                                                                                             Y��     �         E      =    sprites[0][0] = loadTexture("gfx/blastoise.png", screen);5�_�   8   :           9          ����                                                                                                                                                                                                                                                                                                                                                             Y��     �         E      =    sprites[0][0] = loadTexture("gfx/blastoise.png", screen);5�_�   9   ;           :          ����                                                                                                                                                                                                                                                                                                                                                             Y��     �      	   E      9    sprites[1] = loadTexture("gfx/rayquaza.png", screen);5�_�   :   <           ;          ����                                                                                                                                                                                                                                                                                                                                                             Y��     �      	   E      ;    sprites[1][] = loadTexture("gfx/rayquaza.png", screen);5�_�   ;   =           <          ����                                                                                                                                                                                                                                                                                                                                                             Y��     �      
   E    �      	   E    5�_�   <   >           =   	       ����                                                                                                                                                                                                                                                                                                                                                             Y��     �   	      F    �   	   
   F    5�_�   =   ?           >   
       ����                                                                                                                                                                                                                                                                                                                                                             Y��     �   
      G    �   
      G    5�_�   >   @           ?   	       ����                                                                                                                                                                                                                                                                                                                                                             Y��     �      
   H      <    sprites[1][0] = loadTexture("gfx/rayquaza.png", screen);5�_�   ?   A           @   
       ����                                                                                                                                                                                                                                                                                                                                                             Y��     �   	      H      <    sprites[1][0] = loadTexture("gfx/rayquaza.png", screen);5�_�   @   B           A          ����                                                                                                                                                                                                                                                                                                                                                             Y��     �   
      H      <    sprites[1][0] = loadTexture("gfx/rayquaza.png", screen);5�_�   A   C           B      -    ����                                                                                                                                                                                                                                                                                                                                                             Y��     �      	   H      <    sprites[1][0] = loadTexture("gfx/rayquaza.png", screen);5�_�   B   D           C   	   -    ����                                                                                                                                                                                                                                                                                                                                                             Y��     �      
   H      <    sprites[1][1] = loadTexture("gfx/rayquaza.png", screen);5�_�   C   E           D   
   -    ����                                                                                                                                                                                                                                                                                                                                                             Y��     �   	      H      <    sprites[1][2] = loadTexture("gfx/rayquaza.png", screen);5�_�   D   F           E      -    ����                                                                                                                                                                                                                                                                                                                                                             Y��    �   
      H      <    sprites[1][3] = loadTexture("gfx/rayquaza.png", screen);5�_�   E   G           F      1    ����                                                                                                                                                                                                                                                                                                                                                             Y�
a     �         H      Rvoid initGfx(SDL_Surface **textures, SDL_Surface ***sprites, SDL_Surface *screen){5�_�   F   H           G      1    ����                                                                                                                                                                                                                                                                                                                                                             Y�
a     �         H      Qvoid initGfx(SDL_Surface **textures, SDL_Surface **sprites, SDL_Surface *screen){5�_�   G   I           H      9    ����                                                                                                                                                                                                                                                                                                                                                             Y�
d    �         H      Pvoid initGfx(SDL_Surface **textures, SDL_Surface *sprites, SDL_Surface *screen){5�_�   H   J           I   
       ����                                                                                                                                                                                                                                                                                                                                                             Y�     �   	   
          B    sprites[1][2] = loadTexture("gfx/rayquazaRight1.png", screen);5�_�   I   K           J   
       ����                                                                                                                                                                                                                                                                                                                                                             Y�     �   
      G    �   
      G    5�_�   J   L           K   
       ����                                                                                                                                                                                                                                                                                                                                                             Y�     �   	      H      A    sprites[1][3] = loadTexture("gfx/rayquazaBack1.png", screen);5�_�   K               L          ����                                                                                                                                                                                                                                                                                                                                                             Y�	    �   
      H      B    sprites[1][2] = loadTexture("gfx/rayquazaRight1.png", screen);5�_�   -   /       2   .   !   �    ����                                                                                                                                                                                                                                                                                                                                                             Y�4     �       "   B      �    window = SDL_CreateWindow("projectgs", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN /*| SDL_WINDOW_FULLSCREEN/);5�_�   .   0           /   !   �    ����                                                                                                                                                                                                                                                                                                                                                             Y�4     �       "   B      �    window = SDL_CreateWindow("projectgs", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN /*| SDL_WINDOW_FULLSCREEN);5�_�   /   1           0   !   �    ����                                                                                                                                                                                                                                                                                                                                                             Y�6     �       "   B      �    window = SDL_CreateWindow("projectgs", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN *| SDL_WINDOW_FULLSCREEN);5�_�   0               1   !   �    ����                                                                                                                                                                                                                                                                                                                                                             Y�7    �       "   B      �    window = SDL_CreateWindow("projectgs", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN | SDL_WINDOW_FULLSCREEN);5�_�                           ����                                                                                                                                                                                                                                                                                                                            1           1           V        Y�ǉ     �         ?    �         ?      7    textures[2] = loadTexture("gfx/brick.png", screen);   6    textures[3] = loadTexture("gfx/wood.png", screen);5�_�                            ����                                                                                                                                                                                                                                                                                                                            0           0           V        Y�ǂ     �         ?       5�_�                          ����                                                                                                                                                                                                                                                                                                                            1           1           V        Y��l     �         ?    �         ?      7    textures[0] = loadTexture("gfx/brick.png", screen);   6    textures[1] = loadTexture("gfx/wood.png", screen);5�_�                            ����                                                                                                                                                                                                                                                                                                                            1           1           V        Y��p     �      	   A      6    textures[0] = loadTexture("gfx/wood.png", screen);5�_�   	              
      
    ����                                                                                                                                                                                                                                                                                                                                                             Y��u    �          J      #include "src/gfx.h"5��