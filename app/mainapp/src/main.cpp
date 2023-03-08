#include <csvparser.h>

#include <vector>

int main(int argc, char const* argv[])
{

    std::cout << "Enter a csv path :" << std::endl;
    std::string l_str_CsvPath = "";

    do
    {
        std::cout << "Enter a csv path :" << std::endl;
        std::cin >> l_str_CsvPath;
        CSV_Parser* l_t_CsvParser = CSV_Parser::GetInstance();
        l_t_CsvParser = CSV_Parser::GetInstance();
        l_t_CsvParser = CSV_Parser::GetInstance();
        std::vector<CSV_Parser::ActionSurCompte> l_v_ActionSurCompte;
        l_t_CsvParser->ParseCsv(l_str_CsvPath, l_v_ActionSurCompte);

    } while (l_str_CsvPath != "n");
    std::cout << "You asked to stop !" << std::endl;
    return 0;
}