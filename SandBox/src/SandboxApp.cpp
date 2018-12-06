#include"Hazel.h"
#include<stdio.h>

class Sandbox :public Hazel::Application {
public:

	Sandbox() {
		printf("Welcome to Hazel Engine!");

	}

	~Sandbox() {

	}


};

Hazel::Application* Hazel::CreateApplication() {
	return new Sandbox();
}