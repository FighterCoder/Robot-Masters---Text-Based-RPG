#pragma once

class Part
{
public:
	typedef enum part
	{
		NONE,
		HEAD,
		CHEST,
		ARM,
		LEG
	};

	Part();
	~Part();
};