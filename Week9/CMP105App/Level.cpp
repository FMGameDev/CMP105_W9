#include "Level.h"
#include "Player.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	//ball_manager_.setInput(input);

	//ball_manager2_.setInput(input);
	//ball_manager2_.setWindow(window);

	player_manager_.setInput(input);
	player_manager_.setWindow(window);

}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	//ball_manager_.handleInput(dt);
	//ball_manager2_.handleInput(dt);
	player_manager_.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	//ball_manager_.update(dt);
	//ball_manager2_.update(dt);
	player_manager_.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();
	//ball_manager_.render(window);
	//ball_manager2_.render();
	player_manager_.render(window);
	endDraw();
}

// Begins rendering to the back buffer. Background colour set to light blue.
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}