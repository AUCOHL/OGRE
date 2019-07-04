/**
 * @file    ArgParser.h
 * @author  Jinwook Jung (jinwookjungs@gmail.com)
 * @date    2017-02-18 20:26:08
 *
 * Created on Sat Feb 18 20:09:45 2017.
 */

#ifndef ARG_PARSER_H
#define ARG_PARSER_H

#include <iostream>
#include <vector>
#include <algorithm>


/**
 * A simple argument parser.
 */
class ArgParser
{
    private:
        std::vector<std::string> tokens_;   /**< Contains tokens in argv. */

        /**
         * Implement this function if necessary.
         */
        void check_arguments (void)
        {
            // TODO
        }

        ArgParser() {}
        ArgParser(const ArgParser& a) = delete;
        ArgParser& operator=  (const ArgParser& a) = delete;


    public:
        static ArgParser& get()
        {
            static ArgParser ap;
            return ap;
        }

        void initialize (int &argc, char **argv)
        {
            for (auto i = 1; i < argc; ++i) {
                tokens_.push_back(std::string(argv[i]));
            }
            check_arguments();
        }

        /**
         * @return Argunemt value in string type.
         */
        const std::string get_argument (const std::string &argument) const
        {
            auto it = find(tokens_.begin(), tokens_.end(), argument);
            if (it != tokens_.end() && ++it != tokens_.end()) {
                return *it;
            }
            return "";
        }

        /**
         * @return True if the given @argument exists.
         */
        bool exists_argument (const std::string &argument) const
        {
            return find(tokens_.begin(), tokens_.end(), argument) != tokens_.end();
        }

        static void print_help_messages (void)
        {
            std::cerr << "usage: ** DESCRIBE HERE **" << std::endl;
        }
};

#endif
