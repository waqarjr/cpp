#include <iostream>
#include <string>
using namespace std;

class Event
{
private:
    int eventId;
    string eventType;
    string eventName;

public:
    Event() {
        eventId = 0;
        eventType = "";
        eventName = "";
    }

    Event(int id, string type, string name) {
        eventId = id;
        eventType = type;
        eventName = name;
    }

    Event(const Event &e) {
        eventId = e.eventId;
        eventType = e.eventType;
        eventName = e.eventName;
    }

    void setEventId(int id) {
        eventId = id;
    }

    void setEventType(string type) {
        eventType = type;
    }

    void setEventName(string name) {
        eventName = name;
    }

    int getEventId() const {
        return eventId;
    }
    string getEventType() const {
        return eventType;
    }

    string getEventName() const {
        return eventName;
    }

    void display() const {
        cout << "Event ID: " << eventId;
        cout << "\nEvent Type: " << eventType;
        cout << "\nEvent Name: " << eventName << "\n";
    }
};
int main() {
    Event event1(101, "Conference", "Tech Innovations");

    Event event2 = event1;

    Event event3;
    event3.setEventId(202);
    event3.setEventType("Corporate Party");
    event3.setEventName("Annual Celebration");

    cout << "Event 1 Details:\n";
    event1.display();
    cout << "\nEvent 2 (Copied from Event 1):\n";
    event2.display();

    cout << "\nAccessing Event 3 details using getters:\n";
    cout << "Event ID: " << event3.getEventId() << endl;
    cout << "Event Type: " << event3.getEventType() << endl;
    cout << " Event Name : " << event3.getEventName() << endl;
        return 0;
}