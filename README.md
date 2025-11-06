# voting-system
Voting Simulation

A C program that simulates an election between a user-defined candidate and two randomly generated opponents. Popularity is calculated based on four attributes: morality, financial power, charisma, and media visibility.

Features

User-defined candidate input

Randomly generated rival candidates

Automatic revote in case of a tie

ASCII histogram showing popularity comparison

Formula
Popularity = 100 × (0.3 × Morality + 0.25 × Financial + 0.25 × Charisma + 0.2 × Visibility)

Example Output
Welcome to the Online Voting simulation
Enter your candidate's name: Alex
Determine Alex's Morality (0-1): 0.8
Determine Alex's Financial Power (0-1): 0.7
Determine Alex's Charisma (0-1): 0.6
Determine Alex's Media Visibility (0-1): 0.5

Let us now run a simulation with 2 randomly generated rival candidates
Enter the name of rival candidate 1: Blaze
Enter the name of rival candidate 2: Nova

Popularity Scores:
Alex: 66.50
Blaze: 58.72
Nova: 71.13
Nova wins the election!

|************************* Alex - 66.50
|**********************   Blaze - 58.72
|*************************** Nova - 71.13

Compilation
gcc voting.c -o voting
./voting
