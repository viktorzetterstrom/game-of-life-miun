/**
 * @file FileLoader.h
 * @author Erik Ström
 * @brief Declaration of FileLoader, class for loading cell population from file.
 * @version 0.1
 * @date 2018-10-29
 */

#ifndef FileLoaderH
#define FileLoaderH

#include <map>
#include "Cell_Culture/Cell.h"
#include "Globals.h"

using namespace std;

/**
 * @brief Determines starting values for simulation, based on contents of 
 * specified file.
 * @details Reads startup values from specified file, containing values for 
 * WORLD_DIMENSIONS and cell Population. Will create the corresponding cells.
 */
class FileLoader {

public:
    /**
     * @brief Empty constructor of FileLoader.
     */
    FileLoader() {}

    /**
     * @brief Loads a population seed from a file.
     * @details Stores the population seed in a referenced std::map with mapping
     *  Point -> Cell
     * 
     * @param cells Reference to a std::map with cells mapped to points.
     * 
     * @test Test loading files with correct syntax of different size. Also test
     *  files with incorrect syntax, incorrect symbols and empty file.
     * @todo Add checks to ensure correct syntax is required for simulation to 
     *   start, throw error otherwise.
     */
    void loadPopulationFromFile(map<Point, Cell>& cells);
};

#endif
