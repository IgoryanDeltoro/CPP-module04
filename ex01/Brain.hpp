#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
    private:
        std::string _ideas[100];

    public:
        Brain();
        Brain(const Brain &other);
        Brain& operator=(const Brain &other);
        ~Brain();

        std::string* getBrainIdeas();
        void setBrainIdeas(const std::string &idea);
};

#endif
