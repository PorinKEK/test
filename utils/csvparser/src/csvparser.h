#include <iostream>
#include <string>
#include <vector>

#ifndef CSVPARSER_H
#define CSVPARSER_H

class CSV_Parser
{
public:
    // ########################################################
    // #######################- UTILS -########################
    // ########################################################
    enum class e_ActionType
    {
        PRELEVMENT = 0,
        VIREMENT,
        RETRAIT
    };

    struct ActionSurCompte
    {
        /* ACTION TYPE */
        e_ActionType m_t_ActionType;

        /* ACTION DESCRIPTION */
        std::string m_str_ActionDesc;

        /* TRASACTION VALUE */
        float m_f_ActionValue;
    };

    // ########################################################
    // ###################- PUBLIC METHODS -###################
    // ########################################################
    /**
     * Delete copy constructor
     */
    CSV_Parser(CSV_Parser& i_t_CsvParser) = delete;

    /**
     * Delete = operator
     */
    void operator=(const CSV_Parser&) = delete;

    /**
     * @brief Get the Instance object
     *
     * @return CSV_Parser instance
     */
    static CSV_Parser* GetInstance();

    /**
     * @brief Parse a csv file from bank account and fil an ActionSurCompte
     * vector
     * @param i_str_CsvPath: Path to the csv file
     * @param o_t_ActionSurCompteVector: ActionSurCompte vector reference
     */
    void ParseCsv(std::string i_str_CsvPath,
                  std::vector<ActionSurCompte>& o_t_ActionSurCompteVector);

private:
    /* Constructor */
    CSV_Parser();
    /* Destructor */
    ~CSV_Parser();
    /* Singleton instance*/
    // static CSV_Parser* m_pt_Instance;
};

#endif /* CSVPARSER_H */