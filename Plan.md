ok so the steps we want to be working so we have a working game are:

# open a  window ////////////////////////////////////////////////////////////////////////////
install the library and compiler, and run them.

# init engine and files
we want to create an instance of the engine class on runtime.
then we load the scenes from a scenes file and put them inside a vector inside the engine object.
the scene is mainly just an empty vector, their file directories, and its settings {}.
to actually load in a scene we call InitScene() which loads the scenes objects onto the scenes object vector.

# run a main menu

# create a UI api for the game

# Make a game scene run