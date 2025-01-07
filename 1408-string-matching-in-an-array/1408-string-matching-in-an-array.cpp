class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        uint8_t N = words.size();
        std::vector<std::string> res;

        // sort by size because a substring need to be
        // of same size or smaller than the containing string
        std::sort(words.begin(), words.end(), [](const auto& s, const auto& s2) {
            return s.size() < s2.size();
        });

        // N - 1 because the last cannot be a substring of anything
        for (uint8_t i = 0; i < N - 1; i++) {
            uint8_t j = i + 1;

            // all strings are unique so no need to check same lengths
            while (j < N && words[j].size() == words[i].size()) j++;

            while (j < N) {
                if (words[j].contains(words[i])) {
                    res.push_back(words[i]);
                    break;
                }
                j++;
            }
        }

        return res;
    }
};