/*
  Adapted version of <device>_features.h
  Removed everything except Flash configuration.
 */

#ifndef S32K_FEATURES_H_
#define S32K_FEATURES_H_

/* FLASH module features */
#if   defined (S32K142)  /* S32K142_features.h */
    /* @brief Is of type FTFA. */
    #define FEATURE_FLS_IS_FTFA (0u)
    /* @brief Is of type FTFC. */
    #define FEATURE_FLS_IS_FTFC (1u)
    /* @brief Is of type FTFE. */
    #define FEATURE_FLS_IS_FTFE (0u)
    /* @brief Is of type FTFL. */
    #define FEATURE_FLS_IS_FTFL (0u)
    /* @brief Has flags indicating the status of the FlexRAM (register bits FCNFG[EEERDY], FCNFG[RAMRDY] and FCNFG[PFLSH]). */
    #define FEATURE_FLS_HAS_FLEX_RAM_FLAGS (1u)
    /* @brief Has program flash swapping status flag (register bit FCNFG[SWAP]). */
    #define FEATURE_FLS_HAS_PF_SWAPPING_STATUS_FLAG (0u)
    /* @brief Has EEPROM region protection (register FEPROT). */
    #define FEATURE_FLS_HAS_EEROM_REGION_PROTECTION (1u)
    /* @brief Has data flash region protection (register FDPROT). */
    #define FEATURE_FLS_HAS_DATA_FLS_REGION_PROTECTION (1u)
    /* @brief P-Flash block count. */
    #define FEATURE_FLS_PF_BLOCK_COUNT (1u)
    /* @brief P-Flash block size. */
    #define FEATURE_FLS_PF_BLOCK_SIZE (262144u)
    /* @brief P-Flash sector size. */
    #define FEATURE_FLS_PF_BLOCK_SECTOR_SIZE (2048u)
    /* @brief P-Flash write unit size. */
    #define FEATURE_FLS_PF_BLOCK_WRITE_UNIT_SIZE (8u)
    /* @brief P-Flash block swap feature. */
    #define FEATURE_FLS_HAS_PF_BLOCK_SWAP (0u)
    /* @brief Has FlexNVM memory. */
    #define FEATURE_FLS_HAS_FLEX_NVM (1u)
    /* @brief FlexNVM block count. */
    #define FEATURE_FLS_DF_BLOCK_COUNT (1u)
    /* @brief FlexNVM block size. */
    #define FEATURE_FLS_DF_BLOCK_SIZE (65536u)
    /* @brief FlexNVM sector size. */
    #define FEATURE_FLS_DF_BLOCK_SECTOR_SIZE (2048u)
    /* @brief FlexNVM write unit size. */
    #define FEATURE_FLS_DF_BLOCK_WRITE_UNIT_SIZE (8u)
    /* @brief FlexNVM start address. (Valid only if FlexNVM is available.) */
    #define FEATURE_FLS_DF_START_ADDRESS (0x10000000u)
    /* @brief Has FlexRAM memory. */
    #define FEATURE_FLS_HAS_FLEX_RAM (1u)
    /* @brief FlexRAM size. */
    #define FEATURE_FLS_FLEX_RAM_SIZE (4096u)
    /* @brief FlexRAM start address. (Valid only if FlexRAM is available.) */
    #define FEATURE_FLS_FLEX_RAM_START_ADDRESS (0x14000000u)
    /* @brief Has 0x00 Read 1s Block command. */
    #define FEATURE_FLS_HAS_READ_1S_BLOCK_CMD (1u)
    /* @brief Has 0x01 Read 1s Section command. */
    #define FEATURE_FLS_HAS_READ_1S_SECTION_CMD (1u)
    /* @brief Has 0x02 Program Check command. */
    #define FEATURE_FLS_HAS_PROGRAM_CHECK_CMD (1u)
    /* @brief Has 0x03 Read Resource command. */
    #define FEATURE_FLS_HAS_READ_RESOURCE_CMD (0u)
    /* @brief Has 0x06 Program Longword command. */
    #define FEATURE_FLS_HAS_PROGRAM_LONGWORD_CMD (0u)
    /* @brief Has 0x07 Program Phrase command. */
    #define FEATURE_FLS_HAS_PROGRAM_PHRASE_CMD (1u)
    /* @brief Has 0x08 Erase Flash Block command. */
    #define FEATURE_FLS_HAS_ERASE_BLOCK_CMD (1u)
    /* @brief Has 0x09 Erase Flash Sector command. */
    #define FEATURE_FLS_HAS_ERASE_SECTOR_CMD (1u)
    /* @brief Has 0x0B Program Section command. */
    #define FEATURE_FLS_HAS_PROGRAM_SECTION_CMD (1u)
    /* @brief Has 0x40 Read 1s All Blocks command. */
    #define FEATURE_FLS_HAS_READ_1S_ALL_BLOCKS_CMD (1u)
    /* @brief Has 0x41 Read Once command. */
    #define FEATURE_FLS_HAS_READ_ONCE_CMD (1u)
    /* @brief Has 0x43 Program Once command. */
    #define FEATURE_FLS_HAS_PROGRAM_ONCE_CMD (1u)
    /* @brief Has 0x44 Erase All Blocks command. */
    #define FEATURE_FLS_HAS_ERASE_ALL_CMD (1u)
    /* @brief Has 0x45 Verify Backdoor Access Key command. */
    #define FEATURE_FLS_HAS_VERIFY_BACKDOOR_ACCESS_KEY_CMD (1u)
    /* @brief Has 0x46 Swap Control command. */
    #define FEATURE_FLS_HAS_SWAP_CONTROL_CMD (0u)
    /* @brief Has 0x49 Erase All Blocks unsecure command. */
    #define FEATURE_FLS_HAS_ERASE_ALL_BLOCKS_UNSECURE_CMD (1u)
    /* @brief Has 0x80 Program Partition command. */
    #define FEATURE_FLS_HAS_PROGRAM_PARTITION_CMD (1u)
    /* @brief Has 0x81 Set FlexRAM Function command. */
    #define FEATURE_FLS_HAS_SET_FLEXRAM_FUNCTION_CMD (1u)
    /* @brief P-Flash Erase/Read 1st all block command address alignment. */
    #define FEATURE_FLS_PF_BLOCK_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief P-Flash Erase sector command address alignment. */
    #define FEATURE_FLS_PF_SECTOR_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief P-Flash Program/Verify section command address alignment. */
    #define FEATURE_FLS_PF_SECTION_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief P-Flash Read resource command address alignment. */
    #define FEATURE_FLS_PF_RESOURCE_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief P-Flash Program check command address alignment. */
    #define FEATURE_FLS_PF_CHECK_CMD_ADDRESS_ALIGMENT (4u)
    /* @brief P-Flash Program check command address alignment. */
    #define FEATURE_FLS_PF_SWAP_CONTROL_CMD_ADDRESS_ALIGMENT (0u)
    /* @brief FlexNVM Erase/Read 1st all block command address alignment. */
    #define FEATURE_FLS_DF_BLOCK_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief FlexNVM Erase sector command address alignment. */
    #define FEATURE_FLS_DF_SECTOR_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief FlexNVM Program/Verify section command address alignment. */
    #define FEATURE_FLS_DF_SECTION_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief FlexNVM Read resource command address alignment. */
    #define FEATURE_FLS_DF_RESOURCE_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief FlexNVM Program check command address alignment. */
    #define FEATURE_FLS_DF_CHECK_CMD_ADDRESS_ALIGMENT (4u)
    /* @brief FlexNVM partition code 0000 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0000 (0x00010000u)
    /* @brief FlexNVM partition code 0001 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0001 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 0010 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0010 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 0011 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0011 (0x00008000u)
    /* @brief FlexNVM partition code 0100 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0100 (0x00000000u)
    /* @brief FlexNVM partition code 0101 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0101 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 0110 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0110 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 0111 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0111 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1000 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1000 (0x00000000u)
    /* @brief FlexNVM partition code 1001 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1001 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1010 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1010 (0x00004000u)
    /* @brief FlexNVM partition code 1011 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1011 (0x00008000u)
    /* @brief FlexNVM partition code 1100 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1100 (0x00010000u)
    /* @brief FlexNVM partition code 1101 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1101 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1110 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1110 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1111 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1111 (0x00010000u)
    /* @brief Emulated EEPROM size code 0000 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0000 (0xFFFFu)
    /* @brief Emulated EEPROM size code 0001 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0001 (0xFFFFu)
    /* @brief Emulated EEPROM size code 0010 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0010 (0x1000u)
    /* @brief Emulated EEPROM size code 0011 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0011 (0x0800u)
    /* @brief Emulated EEPROM size code 0100 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0100 (0x0400u)
    /* @brief Emulated EEPROM size code 0101 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0101 (0x0200u)
    /* @brief Emulated EEPROM size code 0110 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0110 (0x0100u)
    /* @brief Emulated EEPROM size code 0111 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0111 (0x0080u)
    /* @brief Emulated EEPROM size code 1000 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1000 (0x0040u)
    /* @brief Emulated EEPROM size code 1001 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1001 (0x0020u)
    /* @brief Emulated EEPROM size code 1010 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1010 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1011 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1011 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1100 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1100 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1101 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1101 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1110 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1110 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1111 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1111 (0x0000u)

#elif defined (S32K144)  /* S32K144_features.h */
    /* @brief Is of type FTFA. */
    #define FEATURE_FLS_IS_FTFA (0u)
    /* @brief Is of type FTFC. */
    #define FEATURE_FLS_IS_FTFC (1u)
    /* @brief Is of type FTFE. */
    #define FEATURE_FLS_IS_FTFE (0u)
    /* @brief Is of type FTFL. */
    #define FEATURE_FLS_IS_FTFL (0u)
    /* @brief Has flags indicating the status of the FlexRAM (register bits FCNFG[EEERDY], FCNFG[RAMRDY] and FCNFG[PFLSH]). */
    #define FEATURE_FLS_HAS_FLEX_RAM_FLAGS (1u)
    /* @brief Has program flash swapping status flag (register bit FCNFG[SWAP]). */
    #define FEATURE_FLS_HAS_PF_SWAPPING_STATUS_FLAG (0u)
    /* @brief Has EEPROM region protection (register FEPROT). */
    #define FEATURE_FLS_HAS_EEROM_REGION_PROTECTION (1u)
    /* @brief Has data flash region protection (register FDPROT). */
    #define FEATURE_FLS_HAS_DATA_FLS_REGION_PROTECTION (1u)
    /* @brief P-Flash block count. */
    #define FEATURE_FLS_PF_BLOCK_COUNT (1u)
    /* @brief P-Flash block size. */
    #define FEATURE_FLS_PF_BLOCK_SIZE (524288u)
    /* @brief P-Flash sector size. */
    #define FEATURE_FLS_PF_BLOCK_SECTOR_SIZE (4096u)
    /* @brief P-Flash write unit size. */
    #define FEATURE_FLS_PF_BLOCK_WRITE_UNIT_SIZE (8u)
    /* @brief P-Flash block swap feature. */
    #define FEATURE_FLS_HAS_PF_BLOCK_SWAP (0u)
    /* @brief Has FlexNVM memory. */
    #define FEATURE_FLS_HAS_FLEX_NVM (1u)
    /* @brief FlexNVM block count. */
    #define FEATURE_FLS_DF_BLOCK_COUNT (1u)
    /* @brief FlexNVM block size. */
    #define FEATURE_FLS_DF_BLOCK_SIZE (65536u)
    /* @brief FlexNVM sector size. */
    #define FEATURE_FLS_DF_BLOCK_SECTOR_SIZE (2048u)
    /* @brief FlexNVM write unit size. */
    #define FEATURE_FLS_DF_BLOCK_WRITE_UNIT_SIZE (8u)
    /* @brief FlexNVM start address. (Valid only if FlexNVM is available.) */
    #define FEATURE_FLS_DF_START_ADDRESS (0x10000000u)
    /* @brief Has FlexRAM memory. */
    #define FEATURE_FLS_HAS_FLEX_RAM (1u)
    /* @brief FlexRAM size. */
    #define FEATURE_FLS_FLEX_RAM_SIZE (4096u)
    /* @brief FlexRAM start address. (Valid only if FlexRAM is available.) */
    #define FEATURE_FLS_FLEX_RAM_START_ADDRESS (0x14000000u)
    /* @brief Has 0x00 Read 1s Block command. */
    #define FEATURE_FLS_HAS_READ_1S_BLOCK_CMD (1u)
    /* @brief Has 0x01 Read 1s Section command. */
    #define FEATURE_FLS_HAS_READ_1S_SECTION_CMD (1u)
    /* @brief Has 0x02 Program Check command. */
    #define FEATURE_FLS_HAS_PROGRAM_CHECK_CMD (1u)
    /* @brief Has 0x03 Read Resource command. */
    #define FEATURE_FLS_HAS_READ_RESOURCE_CMD (0u)
    /* @brief Has 0x06 Program Longword command. */
    #define FEATURE_FLS_HAS_PROGRAM_LONGWORD_CMD (0u)
    /* @brief Has 0x07 Program Phrase command. */
    #define FEATURE_FLS_HAS_PROGRAM_PHRASE_CMD (1u)
    /* @brief Has 0x08 Erase Flash Block command. */
    #define FEATURE_FLS_HAS_ERASE_BLOCK_CMD (1u)
    /* @brief Has 0x09 Erase Flash Sector command. */
    #define FEATURE_FLS_HAS_ERASE_SECTOR_CMD (1u)
    /* @brief Has 0x0B Program Section command. */
    #define FEATURE_FLS_HAS_PROGRAM_SECTION_CMD (1u)
    /* @brief Has 0x40 Read 1s All Blocks command. */
    #define FEATURE_FLS_HAS_READ_1S_ALL_BLOCKS_CMD (1u)
    /* @brief Has 0x41 Read Once command. */
    #define FEATURE_FLS_HAS_READ_ONCE_CMD (1u)
    /* @brief Has 0x43 Program Once command. */
    #define FEATURE_FLS_HAS_PROGRAM_ONCE_CMD (1u)
    /* @brief Has 0x44 Erase All Blocks command. */
    #define FEATURE_FLS_HAS_ERASE_ALL_CMD (1u)
    /* @brief Has 0x45 Verify Backdoor Access Key command. */
    #define FEATURE_FLS_HAS_VERIFY_BACKDOOR_ACCESS_KEY_CMD (1u)
    /* @brief Has 0x46 Swap Control command. */
    #define FEATURE_FLS_HAS_SWAP_CONTROL_CMD (0u)
    /* @brief Has 0x49 Erase All Blocks unsecure command. */
    #define FEATURE_FLS_HAS_ERASE_ALL_BLOCKS_UNSECURE_CMD (1u)
    /* @brief Has 0x80 Program Partition command. */
    #define FEATURE_FLS_HAS_PROGRAM_PARTITION_CMD (1u)
    /* @brief Has 0x81 Set FlexRAM Function command. */
    #define FEATURE_FLS_HAS_SET_FLEXRAM_FUNCTION_CMD (1u)
    /* @brief P-Flash Erase/Read 1st all block command address alignment. */
    #define FEATURE_FLS_PF_BLOCK_CMD_ADDRESS_ALIGMENT (16u)
    /* @brief P-Flash Erase sector command address alignment. */
    #define FEATURE_FLS_PF_SECTOR_CMD_ADDRESS_ALIGMENT (16u)
    /* @brief P-Flash Program/Verify section command address alignment. */
    #define FEATURE_FLS_PF_SECTION_CMD_ADDRESS_ALIGMENT (16u)
    /* @brief P-Flash Read resource command address alignment. */
    #define FEATURE_FLS_PF_RESOURCE_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief P-Flash Program check command address alignment. */
    #define FEATURE_FLS_PF_CHECK_CMD_ADDRESS_ALIGMENT (4u)
    /* @brief P-Flash Program check command address alignment. */
    #define FEATURE_FLS_PF_SWAP_CONTROL_CMD_ADDRESS_ALIGMENT (0u)
    /* @brief FlexNVM Erase/Read 1st all block command address alignment. */
    #define FEATURE_FLS_DF_BLOCK_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief FlexNVM Erase sector command address alignment. */
    #define FEATURE_FLS_DF_SECTOR_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief FlexNVM Program/Verify section command address alignment. */
    #define FEATURE_FLS_DF_SECTION_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief FlexNVM Read resource command address alignment. */
    #define FEATURE_FLS_DF_RESOURCE_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief FlexNVM Program check command address alignment. */
    #define FEATURE_FLS_DF_CHECK_CMD_ADDRESS_ALIGMENT (4u)
    /* @brief FlexNVM partition code 0000 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0000 (0x00010000u)
    /* @brief FlexNVM partition code 0001 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0001 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 0010 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0010 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 0011 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0011 (0x00008000u)
    /* @brief FlexNVM partition code 0100 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0100 (0x00000000u)
    /* @brief FlexNVM partition code 0101 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0101 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 0110 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0110 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 0111 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0111 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1000 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1000 (0x00000000u)
    /* @brief FlexNVM partition code 1001 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1001 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1010 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1010 (0x00004000u)
    /* @brief FlexNVM partition code 1011 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1011 (0x00008000u)
    /* @brief FlexNVM partition code 1100 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1100 (0x00010000u)
    /* @brief FlexNVM partition code 1101 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1101 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1110 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1110 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1111 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1111 (0x00010000u)
    /* @brief Emulated EEPROM size code 0000 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0000 (0xFFFFu)
    /* @brief Emulated EEPROM size code 0001 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0001 (0xFFFFu)
    /* @brief Emulated EEPROM size code 0010 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0010 (0x1000u)
    /* @brief Emulated EEPROM size code 0011 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0011 (0x0800u)
    /* @brief Emulated EEPROM size code 0100 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0100 (0x0400u)
    /* @brief Emulated EEPROM size code 0101 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0101 (0x0200u)
    /* @brief Emulated EEPROM size code 0110 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0110 (0x0100u)
    /* @brief Emulated EEPROM size code 0111 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0111 (0x0080u)
    /* @brief Emulated EEPROM size code 1000 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1000 (0x0040u)
    /* @brief Emulated EEPROM size code 1001 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1001 (0x0020u)
    /* @brief Emulated EEPROM size code 1010 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1010 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1011 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1011 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1100 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1100 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1101 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1101 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1110 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1110 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1111 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1111 (0x0000u)

#elif defined (S32K146)  /* S32K146_features.h */
    /* @brief Is of type FTFA. */
    #define FEATURE_FLS_IS_FTFA (0u)
    /* @brief Is of type FTFC. */
    #define FEATURE_FLS_IS_FTFC (1u)
    /* @brief Is of type FTFE. */
    #define FEATURE_FLS_IS_FTFE (0u)
    /* @brief Is of type FTFL. */
    #define FEATURE_FLS_IS_FTFL (0u)
    /* @brief Has flags indicating the status of the FlexRAM (register bits FCNFG[EEERDY], FCNFG[RAMRDY] and FCNFG[PFLSH]). */
    #define FEATURE_FLS_HAS_FLEX_RAM_FLAGS (1u)
    /* @brief Has program flash swapping status flag (register bit FCNFG[SWAP]). */
    #define FEATURE_FLS_HAS_PF_SWAPPING_STATUS_FLAG (0u)
    /* @brief Has EEPROM region protection (register FEPROT). */
    #define FEATURE_FLS_HAS_EEROM_REGION_PROTECTION (1u)
    /* @brief Has data flash region protection (register FDPROT). */
    #define FEATURE_FLS_HAS_DATA_FLS_REGION_PROTECTION (1u)
    /* @brief P-Flash block count. */
    #define FEATURE_FLS_PF_BLOCK_COUNT (2u)
    /* @brief P-Flash block size. */
    #define FEATURE_FLS_PF_BLOCK_SIZE (1048576u)
    /* @brief P-Flash sector size. */
    #define FEATURE_FLS_PF_BLOCK_SECTOR_SIZE (4096u)
    /* @brief P-Flash write unit size. */
    #define FEATURE_FLS_PF_BLOCK_WRITE_UNIT_SIZE (8u)
    /* @brief P-Flash block swap feature. */
    #define FEATURE_FLS_HAS_PF_BLOCK_SWAP (0u)
    /* @brief Has FlexNVM memory. */
    #define FEATURE_FLS_HAS_FLEX_NVM (1u)
    /* @brief FlexNVM block count. */
    #define FEATURE_FLS_DF_BLOCK_COUNT (1u)
    /* @brief FlexNVM block size. */
    #define FEATURE_FLS_DF_BLOCK_SIZE (65536u)
    /* @brief FlexNVM sector size. */
    #define FEATURE_FLS_DF_BLOCK_SECTOR_SIZE (2048u)
    /* @brief FlexNVM write unit size. */
    #define FEATURE_FLS_DF_BLOCK_WRITE_UNIT_SIZE (8u)
    /* @brief FlexNVM start address. (Valid only if FlexNVM is available.) */
    #define FEATURE_FLS_DF_START_ADDRESS (0x10000000u)
    /* @brief Has FlexRAM memory. */
    #define FEATURE_FLS_HAS_FLEX_RAM (1u)
    /* @brief FlexRAM size. */
    #define FEATURE_FLS_FLEX_RAM_SIZE (4096u)
    /* @brief FlexRAM start address. (Valid only if FlexRAM is available.) */
    #define FEATURE_FLS_FLEX_RAM_START_ADDRESS (0x14000000u)
    /* @brief Has 0x00 Read 1s Block command. */
    #define FEATURE_FLS_HAS_READ_1S_BLOCK_CMD (1u)
    /* @brief Has 0x01 Read 1s Section command. */
    #define FEATURE_FLS_HAS_READ_1S_SECTION_CMD (1u)
    /* @brief Has 0x02 Program Check command. */
    #define FEATURE_FLS_HAS_PROGRAM_CHECK_CMD (1u)
    /* @brief Has 0x03 Read Resource command. */
    #define FEATURE_FLS_HAS_READ_RESOURCE_CMD (0u)
    /* @brief Has 0x06 Program Longword command. */
    #define FEATURE_FLS_HAS_PROGRAM_LONGWORD_CMD (0u)
    /* @brief Has 0x07 Program Phrase command. */
    #define FEATURE_FLS_HAS_PROGRAM_PHRASE_CMD (1u)
    /* @brief Has 0x08 Erase Flash Block command. */
    #define FEATURE_FLS_HAS_ERASE_BLOCK_CMD (1u)
    /* @brief Has 0x09 Erase Flash Sector command. */
    #define FEATURE_FLS_HAS_ERASE_SECTOR_CMD (1u)
    /* @brief Has 0x0B Program Section command. */
    #define FEATURE_FLS_HAS_PROGRAM_SECTION_CMD (1u)
    /* @brief Has 0x40 Read 1s All Blocks command. */
    #define FEATURE_FLS_HAS_READ_1S_ALL_BLOCKS_CMD (1u)
    /* @brief Has 0x41 Read Once command. */
    #define FEATURE_FLS_HAS_READ_ONCE_CMD (1u)
    /* @brief Has 0x43 Program Once command. */
    #define FEATURE_FLS_HAS_PROGRAM_ONCE_CMD (1u)
    /* @brief Has 0x44 Erase All Blocks command. */
    #define FEATURE_FLS_HAS_ERASE_ALL_CMD (1u)
    /* @brief Has 0x45 Verify Backdoor Access Key command. */
    #define FEATURE_FLS_HAS_VERIFY_BACKDOOR_ACCESS_KEY_CMD (1u)
    /* @brief Has 0x46 Swap Control command. */
    #define FEATURE_FLS_HAS_SWAP_CONTROL_CMD (0u)
    /* @brief Has 0x49 Erase All Blocks unsecure command. */
    #define FEATURE_FLS_HAS_ERASE_ALL_BLOCKS_UNSECURE_CMD (1u)
    /* @brief Has 0x80 Program Partition command. */
    #define FEATURE_FLS_HAS_PROGRAM_PARTITION_CMD (1u)
    /* @brief Has 0x81 Set FlexRAM Function command. */
    #define FEATURE_FLS_HAS_SET_FLEXRAM_FUNCTION_CMD (1u)
    /* @brief P-Flash Erase/Read 1st all block command address alignment. */
    #define FEATURE_FLS_PF_BLOCK_CMD_ADDRESS_ALIGMENT (16u)
    /* @brief P-Flash Erase sector command address alignment. */
    #define FEATURE_FLS_PF_SECTOR_CMD_ADDRESS_ALIGMENT (16u)
    /* @brief P-Flash Program/Verify section command address alignment. */
    #define FEATURE_FLS_PF_SECTION_CMD_ADDRESS_ALIGMENT (16u)
    /* @brief P-Flash Read resource command address alignment. */
    #define FEATURE_FLS_PF_RESOURCE_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief P-Flash Program check command address alignment. */
    #define FEATURE_FLS_PF_CHECK_CMD_ADDRESS_ALIGMENT (4u)
    /* @brief P-Flash Program check command address alignment. */
    #define FEATURE_FLS_PF_SWAP_CONTROL_CMD_ADDRESS_ALIGMENT (0u)
    /* @brief FlexNVM Erase/Read 1st all block command address alignment. */
    #define FEATURE_FLS_DF_BLOCK_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief FlexNVM Erase sector command address alignment. */
    #define FEATURE_FLS_DF_SECTOR_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief FlexNVM Program/Verify section command address alignment. */
    #define FEATURE_FLS_DF_SECTION_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief FlexNVM Read resource command address alignment. */
    #define FEATURE_FLS_DF_RESOURCE_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief FlexNVM Program check command address alignment. */
    #define FEATURE_FLS_DF_CHECK_CMD_ADDRESS_ALIGMENT (4u)
    /* @brief FlexNVM partition code 0000 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0000 (0x00010000u)
    /* @brief FlexNVM partition code 0001 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0001 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 0010 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0010 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 0011 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0011 (0x00008000u)
    /* @brief FlexNVM partition code 0100 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0100 (0x00000000u)
    /* @brief FlexNVM partition code 0101 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0101 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 0110 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0110 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 0111 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0111 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1000 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1000 (0x00000000u)
    /* @brief FlexNVM partition code 1001 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1001 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1010 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1010 (0x00004000u)
    /* @brief FlexNVM partition code 1011 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1011 (0x00008000u)
    /* @brief FlexNVM partition code 1100 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1100 (0x00010000u)
    /* @brief FlexNVM partition code 1101 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1101 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1110 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1110 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1111 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1111 (0x00010000u)
    /* @brief Emulated EEPROM size code 0000 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0000 (0xFFFFu)
    /* @brief Emulated EEPROM size code 0001 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0001 (0xFFFFu)
    /* @brief Emulated EEPROM size code 0010 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0010 (0x1000u)
    /* @brief Emulated EEPROM size code 0011 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0011 (0x0800u)
    /* @brief Emulated EEPROM size code 0100 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0100 (0x0400u)
    /* @brief Emulated EEPROM size code 0101 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0101 (0x0200u)
    /* @brief Emulated EEPROM size code 0110 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0110 (0x0100u)
    /* @brief Emulated EEPROM size code 0111 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0111 (0x0080u)
    /* @brief Emulated EEPROM size code 1000 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1000 (0x0040u)
    /* @brief Emulated EEPROM size code 1001 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1001 (0x0020u)
    /* @brief Emulated EEPROM size code 1010 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1010 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1011 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1011 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1100 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1100 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1101 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1101 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1110 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1110 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1111 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1111 (0x0000u)

#elif defined (S32K148)  /* S32K148_features.h */
    /* @brief Is of type FTFA. */
    #define FEATURE_FLS_IS_FTFA (0u)
    /* @brief Is of type FTFC. */
    #define FEATURE_FLS_IS_FTFC (1u)
    /* @brief Is of type FTFE. */
    #define FEATURE_FLS_IS_FTFE (0u)
    /* @brief Is of type FTFL. */
    #define FEATURE_FLS_IS_FTFL (0u)
    /* @brief Has flags indicating the status of the FlexRAM (register bits FCNFG[EEERDY], FCNFG[RAMRDY] and FCNFG[PFLSH]). */
    #define FEATURE_FLS_HAS_FLEX_RAM_FLAGS (1u)
    /* @brief Has program flash swapping status flag (register bit FCNFG[SWAP]). */
    #define FEATURE_FLS_HAS_PF_SWAPPING_STATUS_FLAG (0u)
    /* @brief Has EEPROM region protection (register FEPROT). */
    #define FEATURE_FLS_HAS_EEROM_REGION_PROTECTION (1u)
    /* @brief Has data flash region protection (register FDPROT). */
    #define FEATURE_FLS_HAS_DATA_FLS_REGION_PROTECTION (1u)
    /* @brief P-Flash block count. */
    #define FEATURE_FLS_PF_BLOCK_COUNT (3u)
    /* @brief P-Flash block size. */
    #define FEATURE_FLS_PF_BLOCK_SIZE (1572864u)
    /* @brief P-Flash sector size. */
    #define FEATURE_FLS_PF_BLOCK_SECTOR_SIZE (4096u)
    /* @brief P-Flash write unit size. */
    #define FEATURE_FLS_PF_BLOCK_WRITE_UNIT_SIZE (8u)
    /* @brief P-Flash block swap feature. */
    #define FEATURE_FLS_HAS_PF_BLOCK_SWAP (0u)
    /* @brief Has FlexNVM memory. */
    #define FEATURE_FLS_HAS_FLEX_NVM (1u)
    /* @brief FlexNVM block count. */
    #define FEATURE_FLS_DF_BLOCK_COUNT (1u)
    /* @brief FlexNVM block size. */
    #define FEATURE_FLS_DF_BLOCK_SIZE (524288u)
    /* @brief FlexNVM sector size. */
    #define FEATURE_FLS_DF_BLOCK_SECTOR_SIZE (4096u)
    /* @brief FlexNVM write unit size. */
    #define FEATURE_FLS_DF_BLOCK_WRITE_UNIT_SIZE (8u)
    /* @brief FlexNVM start address. (Valid only if FlexNVM is available.) */
    #define FEATURE_FLS_DF_START_ADDRESS (0x10000000u)
    /* @brief Has FlexRAM memory. */
    #define FEATURE_FLS_HAS_FLEX_RAM (1u)
    /* @brief FlexRAM size. */
    #define FEATURE_FLS_FLEX_RAM_SIZE (4096u)
    /* @brief FlexRAM start address. (Valid only if FlexRAM is available.) */
    #define FEATURE_FLS_FLEX_RAM_START_ADDRESS (0x14000000u)
    /* @brief Has 0x00 Read 1s Block command. */
    #define FEATURE_FLS_HAS_READ_1S_BLOCK_CMD (1u)
    /* @brief Has 0x01 Read 1s Section command. */
    #define FEATURE_FLS_HAS_READ_1S_SECTION_CMD (1u)
    /* @brief Has 0x02 Program Check command. */
    #define FEATURE_FLS_HAS_PROGRAM_CHECK_CMD (1u)
    /* @brief Has 0x03 Read Resource command. */
    #define FEATURE_FLS_HAS_READ_RESOURCE_CMD (0u)
    /* @brief Has 0x06 Program Longword command. */
    #define FEATURE_FLS_HAS_PROGRAM_LONGWORD_CMD (0u)
    /* @brief Has 0x07 Program Phrase command. */
    #define FEATURE_FLS_HAS_PROGRAM_PHRASE_CMD (1u)
    /* @brief Has 0x08 Erase Flash Block command. */
    #define FEATURE_FLS_HAS_ERASE_BLOCK_CMD (1u)
    /* @brief Has 0x09 Erase Flash Sector command. */
    #define FEATURE_FLS_HAS_ERASE_SECTOR_CMD (1u)
    /* @brief Has 0x0B Program Section command. */
    #define FEATURE_FLS_HAS_PROGRAM_SECTION_CMD (1u)
    /* @brief Has 0x40 Read 1s All Blocks command. */
    #define FEATURE_FLS_HAS_READ_1S_ALL_BLOCKS_CMD (1u)
    /* @brief Has 0x41 Read Once command. */
    #define FEATURE_FLS_HAS_READ_ONCE_CMD (1u)
    /* @brief Has 0x43 Program Once command. */
    #define FEATURE_FLS_HAS_PROGRAM_ONCE_CMD (1u)
    /* @brief Has 0x44 Erase All Blocks command. */
    #define FEATURE_FLS_HAS_ERASE_ALL_CMD (1u)
    /* @brief Has 0x45 Verify Backdoor Access Key command. */
    #define FEATURE_FLS_HAS_VERIFY_BACKDOOR_ACCESS_KEY_CMD (1u)
    /* @brief Has 0x46 Swap Control command. */
    #define FEATURE_FLS_HAS_SWAP_CONTROL_CMD (0u)
    /* @brief Has 0x49 Erase All Blocks unsecure command. */
    #define FEATURE_FLS_HAS_ERASE_ALL_BLOCKS_UNSECURE_CMD (1u)
    /* @brief Has 0x80 Program Partition command. */
    #define FEATURE_FLS_HAS_PROGRAM_PARTITION_CMD (1u)
    /* @brief Has 0x81 Set FlexRAM Function command. */
    #define FEATURE_FLS_HAS_SET_FLEXRAM_FUNCTION_CMD (1u)
    /* @brief P-Flash Erase/Read 1st all block command address alignment. */
    #define FEATURE_FLS_PF_BLOCK_CMD_ADDRESS_ALIGMENT (16u)
    /* @brief P-Flash Erase sector command address alignment. */
    #define FEATURE_FLS_PF_SECTOR_CMD_ADDRESS_ALIGMENT (16u)
    /* @brief P-Flash Program/Verify section command address alignment. */
    #define FEATURE_FLS_PF_SECTION_CMD_ADDRESS_ALIGMENT (16u)
    /* @brief P-Flash Read resource command address alignment. */
    #define FEATURE_FLS_PF_RESOURCE_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief P-Flash Program check command address alignment. */
    #define FEATURE_FLS_PF_CHECK_CMD_ADDRESS_ALIGMENT (4u)
    /* @brief P-Flash Program check command address alignment. */
    #define FEATURE_FLS_PF_SWAP_CONTROL_CMD_ADDRESS_ALIGMENT (0u)
    /* @brief FlexNVM Erase/Read 1st all block command address alignment. */
    #define FEATURE_FLS_DF_BLOCK_CMD_ADDRESS_ALIGMENT (16u)
    /* @brief FlexNVM Erase sector command address alignment. */
    #define FEATURE_FLS_DF_SECTOR_CMD_ADDRESS_ALIGMENT (16u)
    /* @brief FlexNVM Program/Verify section command address alignment. */
    #define FEATURE_FLS_DF_SECTION_CMD_ADDRESS_ALIGMENT (16u)
    /* @brief FlexNVM Read resource command address alignment. */
    #define FEATURE_FLS_DF_RESOURCE_CMD_ADDRESS_ALIGMENT (8u)
    /* @brief FlexNVM Program check command address alignment. */
    #define FEATURE_FLS_DF_CHECK_CMD_ADDRESS_ALIGMENT (4u)
    /* @brief FlexNVM partition code 0000 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0000 (0x00080000u)
    /* @brief FlexNVM partition code 0001 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0001 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 0010 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0010 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 0011 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0011 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 0100 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0100 (0x000070000u)
    /* @brief FlexNVM partition code 0101 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0101 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 0110 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0110 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 0111 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_0111 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1000 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1000 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1001 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1001 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1010 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1010 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1011 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1011 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1100 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1100 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1101 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1101 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1110 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1110 (0xFFFFFFFFu)
    /* @brief FlexNVM partition code 1111 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
    #define FEATURE_FLS_DF_SIZE_1111 (0x00080000u)
    /* @brief Emulated EEPROM size code 0000 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0000 (0xFFFFu)
    /* @brief Emulated EEPROM size code 0001 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0001 (0xFFFFu)
    /* @brief Emulated EEPROM size code 0010 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0010 (0x1000u)
    /* @brief Emulated EEPROM size code 0011 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0011 (0x0800u)
    /* @brief Emulated EEPROM size code 0100 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0100 (0x0400u)
    /* @brief Emulated EEPROM size code 0101 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0101 (0x0200u)
    /* @brief Emulated EEPROM size code 0110 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0110 (0x0100u)
    /* @brief Emulated EEPROM size code 0111 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_0111 (0x0080u)
    /* @brief Emulated EEPROM size code 1000 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1000 (0x0040u)
    /* @brief Emulated EEPROM size code 1001 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1001 (0x0020u)
    /* @brief Emulated EEPROM size code 1010 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1010 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1011 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1011 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1100 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1100 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1101 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1101 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1110 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1110 (0xFFFFu)
    /* @brief Emulated EEPROM size code 1111 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
    #define FEATURE_FLS_EE_SIZE_1111 (0x0000u)

#else
  #error "flash_device not configured."
#endif

#endif /* S12K_FEATURES_H_ */

