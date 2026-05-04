#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    if (name.empty()) {
        cout << "Please enter a valid name!" << endl;
        return 0;
    }

    vector<string> roasts = {
        "{name} writes code so slow that even a turtle switched to Python.",
        "If procrastination were an Olympic sport, {name} would have gold medals.",
        "{name}'s debugging style is staring at the screen until bugs leave.",
        "{name}'s code runs so slowly that dial-up internet feels fast.",
        "If laziness had a brand ambassador, it would be {name}.",
        "{name} doesn't debug code — they negotiate with bugs.",
        "{name} writes comments like they’re writing a novel.",
        "{name}'s logic is so confusing, even Google gives up.",
        "{name} and bugs are best friends — they never leave each other.",
        "{name}'s code works... but nobody knows why."
    };

    srand(time(0));

    int index = rand() % roasts.size();
    string roast = roasts[index];

    size_t pos = roast.find("{name}");
    while (pos != string::npos) {
        roast.replace(pos, 6, name);
        pos = roast.find("{name}");
    }

    cout << "\n🔥 Your Roast:\n" << roast << endl;

    return 0;
}
