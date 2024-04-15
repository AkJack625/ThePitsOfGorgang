/*  The Pits of Gorgang  */
#include <iostream>
#include <string>
#include <cstdlib>  // for srand and rand
#include <ctime>    // for time

using namespace std;
// Function to get players choice based off number of choices available(maxChoice)
int getPlayerChoice(int maxChoice) {
    // Gets Players Choice
    int choice;
    do {
        cout << "How do you proceed?: ";
        cin >> choice;
        cout << "\n";
        // Validate choice
        if (choice <= maxChoice && choice >= 1) {
            // Choice is valid & break out of loop
            break;
        } else {
            cout << "\nInvalid input. Please enter a choice between 1 and " << maxChoice << ": ";
            // Clear input
            cin.clear();
            cin.ignore();
        }
    } while (true);
    return choice;
}

// Function to generate a random name for the stranger
string generateRandomName() {
    
    string names[] = {"Guillermo", "Frank", "Bamborf", "Huzire"}; // Array of random names
    int index = rand() % (sizeof(names) / sizeof(names[0])); // Generate a random index
    return names[index]; // Return the name
}

// Function to simulate rolling a dice
int rollDice() {
    return rand() % 6 + 1; // Returns a random number between 1 and 6
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); // Seed with current time
    string player = "Kid";
    // TODO adapt code to integrate this new variable "stranger"
    string stranger = "Stranger";
    int score = 0;

    //Introduction
    cout << "You awaken on the ground in the dark, Unable to see anything.\n";
    cout << "You struggle to remember the past few hours and even days, your memory is hazy.\n";
    cout << "<" << player << "> 'Where am I?'\n";
    cout << "All you hear is your echo in response.\n";

    //First choice
    cout << "\n|| What do you wish to do?(Enter choice 1-3) ||\n";
    cout << "|| 1. Stand up. ||\n|| 2. Call out again. ||\n|| 3. Feel around on the ground around you. ||\n\n";
    
    int playerChoice = getPlayerChoice(3);

    // inital move
    switch(playerChoice) {
        case 1:
            cout << "You stand up, and bash your head on a low stone ceiling. You yell in pain then hear someone stir beside you. \n";
            score++;
            break;
        case 2:
            cout << "You call out again. However, this time you get a response.\n";
            score++;
            break;
        case 3:
        // early hint of situation
            cout << "You palm over what seems to be tree branches stripped of their bark before feeling the warm arm of a person beside you.\n";
            score = score + 2;
            break;
        default:
            cout << "Invalid choice.\n";
            break;
    }
    // Dialog block 1
    cout << "<" << player << "> 'Who goes there?'\n";
    cout << "The stranger chuckles and mumors in a hoarse yet frail voice;\n <" << stranger << "> 'The voices sound more and more real every day'\n";
    cout << "<" << player << "> 'What are these voices you speak of?'\n";
    cout << "You hear shuffling, sounds of cloth dragging on stone moving away from you.\n";
    cout << "<" << player <<"> 'Wait! Don't leave me alone in the dark!'\n";
    cout << "The shuffling comes to a sudden end and the stranger speaks;\n";
    cout << "<" << stranger << "> 'So I'm not mad, nor am I alone. At least not anymore. Tell me " << player << ", what did you do to get thrown down here?' He says as his stomach rumbles.\n";
    cout << "The stranger must've determined you're young by your voice; ""<" << player << "> 'My memories seem to be as dark as this room and I have no idea why I'm here.'\n";
    cout << "<" << stranger << "> 'Well do you remember your name?'\n";
    cout << "\n||What do you wish to do?(Enter choice 1-3)||\n";
    cout << "|| 1. Give him your name. || \n|| 2. Give him a fake name. ||\n|| 3. Remain silent. ||\n\n";

    playerChoice = getPlayerChoice(3);
    cin.ignore();

    // Will player share name?
    switch(playerChoice) {
        case 1:
            // increase dialog score which is really just a relationship score
            score = score + 2;
            cout << "My name is ";
            getline(cin, player);
            break;
        case 2:
            cout << "My name is ";
            getline(cin, player);
            break;
        case 3:
            cout << "You say nothing\n";
            score++;
            cout << "<" << stranger << "> 'Quiet one are you then, " << player <<"? None the matter.'\n";
            break;
        default:
            cout << "Invalid choice.\n";
            break;
    }
    // Bread block
    cout << "\n<" << stranger << "> 'Well, no matter what you did back in Gorginar City "<< player << ", nothings going to change the fact that you are here now, and so young.'\n";
    cout << "<" << stranger << "> 'Hey, you wouldn't happen to have a scrap of food on you?\n";
    cout << "While fumbling around in the dark you realize you have a bit of bread tucked away.\n";
    
    // Share bread?
    cout << "\n|| What do you wish to do?(Enter choice 1-3) ||\n\n";
    cout << "|| 1. Keep the bread a secret. || \n";
    cout << "|| 2. Share the bread with the stranger. ||\n";
    cout << "|| 3. Tell him you have some bread but arn't willing to share. ||\n\n";

    playerChoice = getPlayerChoice(3);

//Bread case
switch (playerChoice) {
    case 1:
        cout << "You decide to keep the bread a secret.\n";
        cout << "<" << stranger << "> 'Well it was worth the try.'n";
        break;
    case 2:
        cout << "You decide to share the bread with the stranger.\n";
        cout << "<" << stranger << "> Your kidding, bread... here... and you are willing to share?\n";
        cout << "You stagger towards the voice of the stranger while tearing a piece bread free from the clump. You hand the piece to the stranger and he offers his thanks.\n";
        score = score +2;
        break;
    case 3:
        cout << "You decide to tell him you have some bread but aren't willing to share.\n";
        score--;
        break;
    default:
        cout << "Invalid choice.\n";
        break;
}

    // Queens story
    cout << "\nYou remember that the Stranger asked what you'd done to get put down here, almost as if you've commited a crime.\n";
    cout << "Vaguely, you began to remember; Scenes flash by before your eyes despite the cave being void of light.\n\n";
    cout << "*FLASH You are running through the high streets of Gorginar, the palace ahead.\n*FLASH You are within the palace gates.\n*FLASH You are in the palace kitchens.\n";
    cout << "*FLASH You are stuffing your pockets with bread and cheese.\n*FLASH The palace guards are dragging you down a long hallway with a golden rug streaching down the middle.\n";
    cout << "*FLASH You are forced to you knees before the Queen to answer for your crimes. \n";
    cout << "\nThe Queen sees you for what you are, an urchin, willing to do anything for a meal.\n";
    cout << "She asks why a poor, dirty urchin like yourself has been scouraging the palace kitchen for food?\n";
    cout << "\n|| What do you wish to do?(Enter choice 1-3) ||\n";
    cout << "|| 1. You heard the palace kithcens has the best bread and cheese in the entire Kingdom of Gorgikar. || \n";
    cout << "|| 2. Remain silent, as you are not worthy to adress her majesty. ||";
    cout << "\n|| 3. Tell her you were tired of the novelty of stealing from the Inns of Gorginar, and you desired a real challange. ||\n\n";

    // Tell the Queen

    playerChoice = getPlayerChoice(3);

    switch (playerChoice) {
    case 1:
        cout << "You decide to tell the truth, explaining your desire for fine cheese and bread.\n";
        break;
    case 2:
        cout << "You choose to remain silent, feeling unworthy to address her majesty.\n";
        score++;
        break;
    case 3:
        cout << "You decide to tell her you were tired of the novelty of stealing from the Inns of Gorginar and desired a real challenge.\n";
        score = score + 2;
        break;
    default:
        cout << "Invalid choice.\n";
        break;
}

    // Queens ruleing
    cout << "\nThe penalty for stealing from the palace is execution.\n";
    cout << "However, the Queen takes pity on your young soul and does not wish to see your blood on her hands.\n";
    cout << "The last thing you can remember is the Queen sentancing you to exile in the Pits of Gorgang, with a smirk. Then the palace gaurds carry you out of the room and knock you over the head, knocking you out.\n";

    // Tell the Stranger of the story with the queen?

    cout << "\nAs sudden as you were yanked from the darkness you have been plunged back into it with a gasp, yet the image of the Queens smirk is burned into your retinas.\n";
    cout << "The stranger asks whats the matter?\n\n";
    cout << "\n|| What do you wish to do?(Enter choice 1-3) ||\n";
    cout << "|| 1. Tell him the story. || \n";
    cout << "|| 2. Lie. ||\n";
    cout << "|| 3. Remain silent. ||\n\n";

    playerChoice = getPlayerChoice(3);

    switch (playerChoice) {
        case 1:
            cout << "You decide to tell him the story.\n";
            cout << "Sensing you genuiness, the stranger shares a similar story from their childhood, also about getting caught while thieving.\n";
            score = score + 2;
            break;
        case 2:
            cout << "You tell him that you are experienceing pain in your shoulder.\n";
            score--;
            break;
        case 3:
            cout << "You choose to remain silent.\n";
            score++;
            break;
        default:
            cout << "Invalid choice.\n";
            break;
    }

    cout << "Silence pursues for a while when you realize that you have yet to get the strangers name.\n\n"; 

     // Ask for the stranger's name and decide whether to reveal it
    cout << "|| What do you wish to do?(Enter choice 1-2) ||\n";
    cout << "|| 1. Ask for his name. || \n|| 2. Change the subject. ||\n\n";

    playerChoice = getPlayerChoice(2);

    switch (playerChoice) {
        case 1:
            cout << "You decide to ask for his name." << endl;
            // Roll a dice to see if the stranger reveals his name
            if (score >= 6) {
                stranger = generateRandomName();
                cout << "<" << stranger << "> 'My name is " << stranger << ". Nice to meet you, " << player << ".'\n";
                score++;
            } else if(rollDice() >= 4) {
                stranger = generateRandomName();
                cout << "<" << stranger << "> 'My name is " << stranger << ". Nice to meet you, " << player << ".'\n";
                score++;
            } else {
                cout << "<" << stranger << "> 'I'm not sure I'm willing to share that with you now.'\n";
            }
            break;
        case 2:
            break;
        default:
            cout << "Invalid choice.\n";
            break;
    }
// Ask about stranger's past
    if (score > 9)
    cout << "\n<" << player << "> 'Is there anything else your willing to share?'\n";
    cout << "<" << stranger << "> 'My past? It's a long and painful tale. I was a travelling merchant selling my wares in Gorginar City, when unforseen circumstances led me to this place.'\n";
    
    cout << "\n|| What do you wish to do?(Enter choice 1-3) ||\n";
    cout << "|| 1. Ask for more details. || \n|| 2. Express empathy. ||\n|| 3. Change the subject. ||\n\n";

    playerChoice = getPlayerChoice(3);

    switch (playerChoice) {
        case 1:
            cout << "<" << player << "\n";
            cout << "<" << stranger << "> 'It's a painful memory, but I'll share if you insist.'\n";
            if (score >= 5) { // Adjust the threshold score as needed
                cout << "<" << player << "> 'You mentioned you used to be a merchant. Tell me more about that.'\n";
                cout << "<" << stranger << "> '... I was once a highly skilled and sought-after merchant, traveling the kingdom and selling my wares to the most noble families.'\n";
                cout << "<" << stranger << "> 'My goods were renowned for their quality, and my reputation was impeccable. But alas, all good things must come to an end.'\n";
                cout << "<" << player << "> 'What happened?'\n";
                cout << "<" << stranger << "> 'It's a tale of betrayal and injustice. I had the misfortune of crossing paths with the Queen herself, and in her eyes, I became a threat.'\n";
                cout << "<" << stranger << "> 'She accused me of crimes I did not commit, and in her wrath, she exiled me to these wretched pits, far from the life I once knew.'\n";
                cout << "<" << player << "> 'I'm sorry to hear that. It must have been a difficult ordeal.'\n";
                score++;} else {
                    cout << "<" << player << "> 'You mentioned you used to be a merchant. Tell me more about that.'\n";
                    cout << "<" << stranger << "> 'Ah, those were the days... But perhaps a tale for another time, my friend.'\n";
                    cout << "<" << stranger << "> 'For now, let us focus on the present. Who knows what challenges lie ahead in these dark pits?'\n";
                    }
            break;
        case 2:
            cout << "You express empathy towards the stranger.\n";
            cout << "<" << player << "> 'I'm sorry to hear that. It must have been tough.'\n";
            if (score >= 7) { // Adjust the threshold score as needed
                cout << "<" << player << "> 'You mentioned you used to be a merchant. Tell me more about that.'\n";
                cout << "<" << stranger << "> '... I was once a highly skilled and sought-after merchant, traveling the kingdom and selling my wares to the most noble families.'\n";
                cout << "<" << stranger << "> 'My goods were renowned for their quality, and my reputation was impeccable. But alas, all good things must come to an end.'\n";
                cout << "<" << player << "> 'What happened?'\n";
                cout << "<" << stranger << "> 'It's a tale of betrayal and injustice. I had the misfortune of crossing paths with the Queen herself, and in her eyes, I became a threat.'\n";
                cout << "<" << stranger << "> 'She accused me of crimes I did not commit, and in her wrath, she exiled me to these wretched pits, far from the life I once knew.'\n";
                cout << "<" << player << "> 'I'm sorry to hear that. It must have been a difficult ordeal.'\n";
                score++;} else {
                    cout << "<" << player << "> 'You mentioned you used to be a merchant. Tell me more about that.'\n";
                    cout << "<" << stranger << "> 'Ah, those were the days... But perhaps a tale for another time, my friend.'\n";
                    cout << "<" << stranger << "> 'For now, let us focus on the present. Who knows what challenges lie ahead in these dark pits?'\n";
                    }
            score++;
            break;
        case 3:
            cout << "You change the subject to avoid delving into the stranger's past.\n";
            cout << "<" << player << "> 'Let's talk about something else, shall we?'\n";
            break;
        default:
            cout << "Invalid choice.\n";
            break;
    }

    // Ask about when they typically get fed
    cout << "\n<" << player << "> 'Wait, do they actually feed us down here?'\n";
    cout << "<" << stranger << "> 'Yes, occasionally. It's inconsistent, but when they do, it's usually in large portions. Although, this most recent feeding seemed a bit smaller than usual...'\n";
    // Options for the player's response
    cout << "\n|| What do you wish to do? (Enter choice 1-2) ||\n";
    cout << "|| 1. Express curiosity about the feeding schedule. ||\n";
    cout << "|| 2. Inquire about why they would feed us at all. ||\n\n";

   playerChoice = getPlayerChoice(2);

    switch (playerChoice) {
        case 1:
            cout << "<" << player << "> 'Interesting. Why do you think they feed us?'\n";
            score++;
            break;
        case 2:
            cout << "<" << player << "> 'But why bother feeding us?'\n";
            break;
    }
    cout << stranger << " Well they've got to give us something right? Anyways you'll find out more about that later.\n";

// lead up to final choice
    cout << "<" << stranger << "> 'And unfortunatly " << player << ", we are deep beneath the Jarkmar Mountains in the Pits of Gorgang.\n";
    cout << " <" << stranger << "> Or at least that is my best guess. I havent seen the light of day in who knows how long.\n";
    cout << "You know what he says is true, the Queen said so herself, but before you can fully process what he just said a sudden light emerges from above.\n\n";

    cout << "<" << player << ">  Wha... What is that then?\n";
    cout << "The light continues to grow brighter.\n You realize the growing light is a torch tumbling down a narrow chimney above.\n"; 
    cout << "<" << player << "> 'Why havn't you tried climbing out?'\n";
    cout << "As the torch lands on the ground, its flames flicker, revealing the room you're in. The walls are rough stone, damp and covered in moss.\n";
    cout << "In the dim light, you can make out the shapes of rocks and wood crates scattered around, long abandoned.\n";
    cout << "Water drips from the ceiling, echoing softly in the cavernous space. The air is thick with the smell of damp earth and decay.\n";
    cout << "You can't see much beyond the immediate area illuminated by the torch, but you have a sense that the room extends further into darkness.\n";
    cout << "The torchlight casts eerie shadows on the walls, heightening the sense of foreboding in the air.\n";
    cout << "Scattered around the cave floor are branches stripped of their bark.\n";
    cout << "Hold on... Those arn't branches...\n\n";

    cout << "<" << stranger << "> The shaft's not wide enough for a grown man.\n";
    cout << "A daunting realization floods over you, 'How could I have been so blind.' You think as you lay your eyes on the Stranger for the first time.\n";
    cout << "He appears to be a middle-aged man, his face weathered and lined with hardship.\n";
    cout << "His hair is a tangled mess, knotted and greying at the tips.\n";
    cout << "His clothes are tattered and worn, with patches sewn over holes in the fabric. Despite his ragged appearance, there's a hint of resilience in his eyes.\n";
    cout << "He carries himself with a quiet dignity, even in the face of adversity. It's clear that he's been through a lot, but he hasn't lost hope.\n\n";

    cout << "You make eye contact with him, finally understanding the gravity of the situation.\n";
    cout << "You understand that there will be no food given to you two. You then realize that the smaller feeding he was refering to was  you...\n";
    cout << stranger << " is sizing you up with his eyes.\n You can tell he is ready to pounc.e\n";
    cout << "You take one last fleeting look around the cave, seeing the torch nearby.\n\n";


    // Final choice
    if (score >= 7){ // if player score is 
        cout << "\n|| What do you wish to do? (Enter choice 1-3) ||\n";
        cout << "|| 1. Prepare to fight for survival. ||\n";
        cout << "|| 2. Submit without wishing to do any harm. ||\n";
        cout << "|| 3. Attempt to escape together if your friendship score is high enough. ||\n\n";
        playerChoice = getPlayerChoice(3);

    }else {
        cout << "\n|| What do you wish to do? (Enter choice 1-3) ||\n";
        cout << "|| 1 Prepare to fight for survival. ||\n";
        cout << "|| 2. Submit without wishing to do any harm. ||\n\n";
        playerChoice = getPlayerChoice(2);
    }
    
    // Player and Stranger score assignment
    int playerStrength, strangerStrength;

        if (score > 8){ // Good score fight stats
            playerStrength = rollDice() + score; 
            strangerStrength = rollDice() + score / 2; 
        } else if (score <=8 && score >=5){ // Average score fight stats
            playerStrength = rollDice() + score; 
            strangerStrength = rollDice() + score;
        }else { // bad score fight stats 
            playerStrength = rollDice(); 
            strangerStrength = rollDice() + 2; 
        }

    switch (playerChoice) {
        case 1: // Fight!
                if (playerStrength > strangerStrength) {
                    cout << "Remembering the torch at your feet you pick it up to fend off the stranger. Not wasting any time you charge the man and overpower him with the torch, emerging victorious!\n";
                    cout << "'What have I done!' You yell as you stand above him looking up.\n";
                    cout << "Up through the shaft which the torch fell down. \nThe shaft that the stranger said was too narrow for a man... \n";
                    cout << "Too narrow for a man? \nWell its a good thing you are just a Kid.\n\n";
                    cout << "The End\n\n";
                    cout << "Thank you for playing!";
                } else if (playerStrength < strangerStrength) {
                    cout << "The stranger overpowers you and you succumb to defeat...\n";
                    cout << "Game Over\n";
                    cout << "Thank you for playing!\n";
                }
            break;
        case 2: // Submitting and beg for mercy
            cout << "You choose to submit and beg for mercy.\n";
            cout << "<" << player << "> 'Please, I don't want any trouble. I'll do whatever you say.'\n";
            cout << "You lower yourself to the ground, hands raised in surrender, hoping that the stranger will spare you.\n";
            cout << "The stranger approaches slowly.\n";
            cout << "<" << stranger << "> 'You're wise to surrender, kid. I've seen many grown men meet their end in these pits.'\n";
            cout << "You stare down at the bones of previous victim of the pit of Gorgang.\n";
            if (rollDice() >= 5){
                cout << "You see a small bone snapped in half, in a last ditch effort you snatch the bone up and lunge at the Stranger who has lowerd there guard.\n";
                cout << "Your strike was true and the man crumples to the ground.\n";
                cout << "'What have I done!' You yell as you stand above him looking up.\n";
                cout << "Up through the shaft which the torch fell down. \nThe shaft that the stranger said was too narrow for a man... \n";
                cout << "Too narrow for a man? \nWell its a good thing you are just a Kid.\n\n";
                cout << "The End\n\n";
                cout << "Thank you for playing!";
        }
            cout << "Then he attacks.\n";
            cout << "Game Over\n";
            cout << "Thank you for playing!\n";
            break;

        case 3:// Escape!
            cout << "<" << player << "> 'Listen, we may have a better chance if we work together. We can't trust these circumstances, but we can trust each other.'\n";
            cout << "You look the stranger in the eyes, trying to convey sincerity and determination.\n";
            cout << "<" << player << "> 'We've both been thrown into this pit, but I refuse to believe it's the end for us. There's got to be a way out, and we're more likely to find it if we stick together.'\n";
            cout << "The stranger hesitates for a moment, studying your face, before finally nodding in agreement.\n";
            cout << "<" << stranger << "> 'You make a good point, kid. Alone, we may not stand a chance. But together... maybe we have a shot.'\n";
            cout << "You both start brainstorming ideas, hushed whispers echoing off the damp stone walls as you plot your escape.\n";
            cout << "<" << player << "> 'Hear me out, I could try to climb out through that narrow shaft where the torch came from.'\n";
            cout << "<" << player << "> 'Then once I'm out I'll scrounge up as much food as I can and steal some pick axes and bring it back.'\n";
            cout << "<" << player << "> 'Togehter we can dig our way out of here.'\n";
            cout << "<" << stranger << "> 'I don't know, sounds risky what if you  get caught?'\n";
            cout << "<" << player << "> That's a risk I'm willing to take.\n";

            stranger = generateRandomName();
            cout << "<Stranger> I " << stranger << ", have full faith in you " << player << ".";

            cout << "You climb out and surprisingly there are no guards in sight.\n";
            cout << "You hike to the nearest village where you convince a local farmer to lend you some tools and gives you a healthy supplyh of food.\n";
            cout << "Back in the pit, after days of tireless effort, the opening finally expands enough for you and " << stranger << "to climb out. \n";
            cout << "As you emerge into the open air, a sense of relief washes over you both. You exchange a nod, silently acknowledging the bond forged, before setting off together, determined to leave the pits of Gorgang behind for good.\n";
            cout << "The End\n\nThank youy for playing!\n\n";
            break;

        default:
            cout << "Invalid choice.\n";
            break;
    }

return 0;
}

