tracy-play: tracy-play.c
	c++ -DTRACY_ENABLE=1 -std=c++20 -I./tracy/public -o tracy-play tracy/public/TracyClient.cpp $^
