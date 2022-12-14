#include "gtest/gtest.h"
#include "field.h"

TEST(field_tests, print_world_test)
{
    std::stringstream stream;
    std::cout.rdbuf(stream.rdbuf());

    std::string inputFile = "../../../config/file.txt";
    GameState life(inputFile);
    Field field(life);
    field.initWorld();
    field.printWorld();

    EXPECT_EQ(stream.str(), "                    \n"
                            "        *           \n"
                            "      *   *         \n"
                            "    *   *   *       \n"
                            "  *   *   *   *     \n"
                            "    *   *   *       \n"
                            "      *   *         \n"
                            "        *           \n"
                            "                    \n"
                            "                    \n");
};

TEST(field_tests, rules_test)
{
    std::stringstream stream;
    std::cout.rdbuf(stream.rdbuf());

    std::string inputFile = "../../../config/file.txt";
    GameState life(inputFile);
    Field field(life);
    field.showRules();

    EXPECT_EQ(stream.str(), "This universe have these Rules: \n"
                            "#N Basic\n"
                            "#R #B34/S23\n"
                            "#S 10 10\n");
};

TEST(field_tests, next_world_test) {
    std::stringstream stream;
    std::cout.rdbuf(stream.rdbuf());

    std::string inputFile = "/Users/dima.khoroshev/CLionProjects/NSU_OOP_labs/lab2/config/file.txt";
    GameState life(inputFile);
    Field field(life);

    field.initWorld();
    field.nextWorld();
    field.printWorld();

    EXPECT_EQ(stream.str(), "                    \n"
                            "        *           \n"
                            "      * * *         \n"
                            "    * *   * *       \n"
                            "  * *   *   * *     \n"
                            "    * *   * *       \n"
                            "      * * *         \n"
                            "        *           \n"
                            "                    \n"
                            "                    \n");
};
