#include <iostream>
#include <vector>
#include <algorithm>

class Contest {
public:
    std::vector<int> scores;

    Contest(const std::vector<int>& v) : scores{v} {
        std::cout << "Before swapping the scores: ";
        std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
        std::cout << std::endl;
    }

    void print_scores() {
        std::cout << "After swapping the scores:   
 ";
        std::copy(scores.begin(), scores.end(), std::ostream_iterator<int>(std::cout, " "));
        std::cout << std::endl;
    }

    void swap(Contest& other) {
        std::swap(scores, other.scores);
    }
};

void swap_scores(const std::vector<int>& first, const std::vector<int>& second) {
    Contest first_contest(first);
    Contest second_contest(second);

    first_contest.swap(second_contest);

    first_contest.print_scores();
    second_contest.print_scores();
}
