#ifndef BRAIN_HPP
# define BRAIN_HPP
# define ARR_SIZE 100

# include <iostream>

class Brain {
    private:
        std::string _ideas[ARR_SIZE];

    public:
        Brain();
        Brain(const Brain &other);
        Brain& operator=(const Brain &other);
        ~Brain();

        std::string getBrainIdea(int idx);
        void setBrainIdea(const std::string &idea, int idx);
};

#endif
