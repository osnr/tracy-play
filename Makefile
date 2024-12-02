tracy-play: tracy-play.c
	c++ -I./tracy/public -o tracy-play tracy/public/TracyClient.cpp $^
