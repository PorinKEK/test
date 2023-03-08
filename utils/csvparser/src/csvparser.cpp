#include "csvparser.h"

#include <fstream>
#include <iostream>

/* CSV_Parser */
CSV_Parser::CSV_Parser() {}

/* ~CSV_Parser */
CSV_Parser::~CSV_Parser() {}

/* GetInstance */
CSV_Parser* CSV_Parser::GetInstance()
{
    static CSV_Parser* m_pt_Instance = nullptr;

    if (nullptr == m_pt_Instance)
    {
        m_pt_Instance = new CSV_Parser();
    }

    return m_pt_Instance;
}

/* ParceCsv */
void CSV_Parser::ParseCsv(
    std::string i_str_CsvPath,
    std::vector<ActionSurCompte>& o_t_ActionSurCompteVector)
{
    std::ifstream l_t_CsvFile(i_str_CsvPath);

    if (l_t_CsvFile)
    {
        std::string l_str_CurrentLine = "";
        while (getline(l_t_CsvFile, l_str_CurrentLine))
        {
            std::cout
                << "##########################################################"
                << std::endl;
            std::cout << "Current line : " << std::endl;
            std::cout << l_str_CurrentLine << std::endl;
            std::cout
                << "##########################################################"
                << std::endl;
        }
    }
    else
    {
        std::cout << "CsvFile doesn't exist, path : " << i_str_CsvPath
                  << std::endl;
    }
}
