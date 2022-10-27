#ifndef RESOURCE_UTILS_RESOURCEFILEHEADER_H_
#define RESOURCE_UTILS_RESOURCEFILEHEADER_H_

// System headers
#include <cstdint>
#include <string>

// Other libraries headers

// Own components headers

// Forward declarations

class ResourceFileHeader {
 public:
  ResourceFileHeader() = delete;

  /** @brief used to fill the beginning of the Engine resource file
   *
   *  @returns std::string - the text file header
   * */
  static std::string getEngineResHeader();

  /** @brief used to fill the beginning of the Engine resource file
   *
   *  @returns std::string - the text file header
   * */
  static std::string getEngineResHeaderAddition();

  /** @brief used to fill the beginning of the Engine resource file
   *         for the dynamic values (those that will be loaded/unloaded
   *                                                        dynamically);
   *
   *  @returns std::string - the text file header
   * */
  static std::string getEngineResDynamicValuesHeader();

  /** @brief used to fill the beginning of the Engine font file
   *
   *  @returns std::string - the font file header
   * */
  static std::string getEngineFontHeader();

  /** @brief used to fill the beginning of the Engine sound file
   *
   *  @returns std::string - the sound file header
   * */
  static std::string getEngineSoundHeader();

  /** @brief used to fill the beginning of the Engine sound file
   *
   *  @returns std::string - the sound file header addition
   * */
  static std::string getEngineSoundHeaderAddition();

  /** @brief used to fill the beginning of the Engine common games file
   *
   *  @returns std::string - the common games file header
   * */
  static std::string getEngineCommonGamesHeader();

  /** @brief used to fill the end of the Engine resource/font/sound file
   *                                          with total file sizes
   *
   *  @returns std::string - the engine file size header
   * */
  static std::string getEngineFileSizeHeader();

  /** @brief used to fill the slot after the file header in order to
   *         "reserve" text space for total widget/font count.
   *         After the parsing of all files is done this reserved slot
   *         is overridden with the actual number of widgets/fonts.
   *
   *  @returns std::string - the text header
   * */
  static std::string getEngineValueReservedSlot();

  /** @brief used to fill the beginning of the individual
   *                                                 game's resource file
   *
   *  @returns std::string - the game text header
   * */
  static std::string getResourceFileHeader();

  /** @brief contains name of the global generated resource/font/sound files
   *
   *  @return sdtd::string - resource/font/sound bin file names
   * */
  static std::string getResourceBinName();
  static std::string getFontBinName();
  static std::string getSoundBinName();
  static std::string getResourcesFolderName();
  static std::string getAutoGeneratedFolderName();
};

#endif /* RESOURCE_UTILS_RESOURCEFILEHEADER_H_ */