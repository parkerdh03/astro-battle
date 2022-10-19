# SPACE INVADERS


# game_element.cc/game_element.h
- Creates the original size and location of the game screen

# game.cc/game.h
- Creates the initial game screen based off the parameters in game_element.cc
- Initializes the Player/Opponent models and the Player Projectile/Opponent Projectile models
- Updates the screen as the game progresses

# player.cc/player.h
- Sets the size of the Player model/Player Projectile model
- Creates the Player model image
- Creates the Player Projectile model image
- Determines how the Player model interacts with the Opponent Projectiles

# opponent.cc/opponent.h
- Sets the size of the Opponent model/Opponent Projectile model
- Creates the Opponent model image
- Creates the Opponent Projectile model image

