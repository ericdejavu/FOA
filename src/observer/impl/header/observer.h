#ifndef OBSERVER_H
#define OBSERVER_H

#include <vector>

class IObserverable {
public:
	virtual void updateProgress(double value);
	virtual ~IObserverable();
};

class ConsoleObserver : public IObserverable {
public:
	void updateProgress(double value);
};

class GuiObserver : public IObserverable {
public:
	void updateProgress(double value);
};

class ISubject {
public:
	virtual void doTask();
	virtual ~ISubject();
};

class Service {
private:
	std::vector<IObserverable*> observers;

public:
	Service();
	~Service();
	void doTask();
};


#endif
