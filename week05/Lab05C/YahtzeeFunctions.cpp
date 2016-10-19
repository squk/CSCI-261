/*
 * Author : Christian Nieves
 */
#include "YahtzeeFunctions.h"

bool IsChance(int die1, int die2, int die3, int die4, int die5) {
    return true;
}

int ScoreChance(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    int points = 0;
    for (int i = 0; i < 5; i++) {
        points += dice[i];
    }
    return points;
}

bool IsOnes(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    int onesCount = 0;
    for (int i = 0; i < 5; i++) {
        if (dice[i] == 1)
            onesCount++;
    }
    return onesCount;
}

int ScoreOnes(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    int onesPoints = 0;
    for (int i = 0; i < 5; i++) {
        if (dice[i] == 1)
            onesPoints += dice[i];
    }
    return onesPoints;
}

bool IsTwos(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    int twosCount = 0;
    for (int i = 0; i < 5; i++) {
        if (dice[i] == 2)
            twosCount++;
    }
    return twosCount;
}

int ScoreTwos(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    int twosPoints = 0;
    for (int i = 0; i < 5; i++) {
        if (dice[i] == 2)
            twosPoints += dice[i];
    }
    return twosPoints;
}

bool IsThrees(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    int threesCount = 0;
    for (int i = 0; i < 5; i++) {
        if (dice[i] == 3)
            threesCount++;
    }
    return threesCount;
}

int ScoreThrees(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    int threesPoints = 0;
    for (int i = 0; i < 5; i++) {
        if (dice[i] == 3)
            threesPoints += dice[i];
    }
    return threesPoints;
}

bool IsFours(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    int foursCount = 0;
    for (int i = 0; i < 5; i++) {
        if (dice[i] == 4)
            foursCount++;
    }
    return foursCount;
}

int ScoreFours(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    int foursPoints = 0;
    for (int i = 0; i < 5; i++) {
        if (dice[i] == 4)
            foursPoints += dice[i];
    }
    return foursPoints;
}

bool IsFives(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    int fivesCount = 0;
    for (int i = 0; i < 5; i++) {
        if (dice[i] == 5)
            fivesCount++;
    }
    return fivesCount;
}

int ScoreFives(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    int fivesPoints = 0;
    for (int i = 0; i < 5; i++) {
        if (dice[i] == 5)
            fivesPoints += dice[i];
    }
    return fivesPoints;
}

bool IsSixes(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    int sixesCount = 0;
    for (int i = 0; i < 5; i++) {
        if (dice[i] == 6)
            sixesCount++;
    }
    return sixesCount;
}

int ScoreSixes(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    int sixesPoints = 0;
    for (int i = 0; i < 5; i++) {
        if (dice[i] == 6)
            sixesPoints += dice[i];
    }
    return sixesPoints;
}

bool IsThreeOfAKind(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    int counts[5] = {0};
    // type of dice
    for (int i = 1; i <= 5; i++) {
        // index
        for (int j = 0; j < 5; j++) {
            if (dice[j] == i)
                counts[i-1]++;
        }
    }

    for (int i = 0; i < 5; i++) {
        if (counts[i] >= 3) {
            return true;
        }
    }

    return false;
}

int ScoreThreeOfAKind(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    int counts[5] = {0};
    // type of dice
    for (int i = 1; i <= 5; i++) {
        // index
        for (int j = 0; j < 5; j++) {
            if (dice[j] == i)
                counts[i-1]++;
        }
    }

    for (int i = 0; i < 5; i++) {
        if (counts[i] >= 3) {
            return ScoreChance(die1, die2, die3, die4, die5);
        }
    }

    return 0;
}

bool IsFourOfAKind(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    int counts[5] = {0};
    // type of dice
    for (int i = 1; i <= 5; i++) {
        // index
        for (int j = 0; j < 5; j++) {
            if (dice[j] == i)
                counts[i-1]++;
        }
    }

    for (int i = 0; i < 5; i++) {
        if (counts[i] >= 4) {
            return true;
        }
    }

    return false;
}

int ScoreFourOfAKind(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    int counts[5] = {0};
    // type of dice
    for (int i = 1; i <= 5; i++) {
        // index
        for (int j = 0; j < 5; j++) {
            if (dice[j] == i)
                counts[i-1]++;
        }
    }

    for (int i = 0; i < 5; i++) {
        if (counts[i] >= 4) {
            return ScoreChance(die1, die2, die3, die4, die5);
        }
    }

    return 0;
}

bool IsFullHouse(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    int counts[5] = {0};

    // type of dice
    for (int i = 1; i <= 5; i++) {
        // index
        for (int j = 0; j < 5; j++) {
            if (dice[j] == i)
                counts[i-1]++;
        }
    }

    bool hasThree = false;
    bool hasTwo = false;
    for (int i = 0; i < 5; i++) {
        if (counts[i] == 3)
            hasThree = true;
        if (counts[i] == 2)
            hasTwo = true;
    }

    return hasThree && hasTwo;
}

int ScoreFullHouse(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    if (IsFullHouse(die1, die2, die3, die4, die5))
        return 25;
    else
        return 0;
}

bool IsSmallStraight(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    int inARow = 1;
    for (int i = 1; i < 5; i++) {
        if (dice[i-1]+1 == dice[i])
            inARow++;
        else if (dice[i-1] == dice[i])
            continue;
        else
            inARow = 1;

        if (inARow == 4)
            return true;
    }

    return false;
}

int ScoreSmallStraight(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    if (IsSmallStraight(die1, die2, die3, die4, die5))
        return 30;
    else
        return 0;
}

bool IsLargeStraight(int die1, int die2, int die3, int die4, int die5) {
    SortDice(die1, die2, die3, die4, die5);
    int dice[5] = { die1, die2, die3, die4, die5 };
    int inARow = 1;
    for (int i = 1; i < 5; i++) {
        if (dice[i-1]+1 == dice[i])
            inARow++;
        else if (dice[i-1] == dice[i])
            continue;
        else
            inARow = 1;

        if (inARow == 5)
            return true;
    }

    return false;
}

int ScoreLargeStraight(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    if (IsLargeStraight(die1, die2, die3, die4, die5))
        return 40;
    else
        return 0;
}

bool IsYahtzee(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    return ((dice[0] == dice[1]) && (dice[1] == dice[2]) && (dice[2] ==
                dice[3]) && (dice[3] == dice[4]));
}

int ScoreYahtzee(int die1, int die2, int die3, int die4, int die5) {
    int dice[5] = { die1, die2, die3, die4, die5 };
    if (IsYahtzee(die1, die2, die3, die4, die5))
        return 50;
    else
        return 0;
}

void SwapDice(int &die1, int &die2) {
    int temp = die1;
    die1 = die2;
    die2 = temp;
}

void SortDice(int &die1, int &die2, int &die3, int &die4, int &die5) {
    // still took the values in as 5 different parameters...
    int *dice[5] = { &die1, &die2, &die3, &die4, &die5 };

    while (*dice[0] > *dice[1] || *dice[1] > *dice[2] || *dice[2] > *dice[3] ||
            *dice [3] > *dice[4]) {
        for (int i=0; i < 4; i++) {
            if (*dice[i] > *dice[i+1])
                SwapDice(*dice[i], *dice[i+1]);
        }
    }
}
