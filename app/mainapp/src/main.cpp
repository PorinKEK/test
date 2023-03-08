#include <csvparser.h>

#include <vector>

int main(int argc, char const* argv[])
{
    CSV_Parser* l_t_CsvParser = CSV_Parser::GetInstance();
    l_t_CsvParser = CSV_Parser::GetInstance();
    l_t_CsvParser = CSV_Parser::GetInstance();
    std::vector<CSV_Parser::ActionSurCompte> l_v_ActionSurCompte;
    l_t_CsvParser->ParseCsv("CSV.csv", l_v_ActionSurCompte);
    return 0;
}
