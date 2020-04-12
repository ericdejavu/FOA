#include "../header/observer.h"


void IObserverable::updateProgress(double value) {}
IObserverable::~IObserverable() {}

void ISubject::doTask() {}
ISubject::~ISubject() {}

void ConsoleObserver::updateProgress(double value) {

}


void GuiObserver::updateProgress(double value) {

}

Service::Service() {
	observers.push_back(new ConsoleObserver());
	observers.push_back(new GuiObserver());
}

Service::~Service() {
	for (IObserverable* observer : observers) {
		delete observer;
	}
}

void Service::doTask() {
	// ... task
	for (int i=0;i<100;i++) {
		for (IObserverable* observer : observers) {
			observer->updateProgress(i / 100);
		}
	}
}
