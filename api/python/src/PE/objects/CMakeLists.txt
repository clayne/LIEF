target_sources(pyLIEF PRIVATE
  pyBinary.cpp
  pyBuilder.cpp
  pyCodeIntegrity.cpp
  pyDataDirectory.cpp
  pyDelayImport.cpp
  pyDelayImportEntry.cpp
  pyDosHeader.cpp
  pyExceptionInfo.cpp
  pyExport.cpp
  pyExportEntry.cpp
  pyFactory.cpp
  pyHeader.cpp
  pyImport.cpp
  pyImportEntry.cpp
  pyLang.cpp
  pyOptionalHeader.cpp
  pyParser.cpp
  pyParserConfig.cpp
  pyRelocation.cpp
  pyRelocationEntry.cpp
  pyResourcesManager.cpp
  pyRichEntry.cpp
  pyRichHeader.cpp
  pySection.cpp
  pyTLS.cpp
)

add_subdirectory(resources)
add_subdirectory(signature)
add_subdirectory(LoadConfigurations)
add_subdirectory(debug)
add_subdirectory(exceptions_info)
