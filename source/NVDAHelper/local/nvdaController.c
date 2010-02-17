#include <windows.h>
#include "nvdaController.h"

__declspec(dllexport) error_status_t(__stdcall *_nvdaController_speakText)(const wchar_t*);
error_status_t __stdcall nvdaController_speakText(const wchar_t* text) {
	return _nvdaController_speakText(text);
}

__declspec(dllexport) error_status_t(__stdcall *_nvdaController_cancelSpeech)();
error_status_t __stdcall nvdaController_cancelSpeech() {
	return _nvdaController_cancelSpeech();
}

__declspec(dllexport) error_status_t(__stdcall *_nvdaController_brailleMessage)(const wchar_t*);
error_status_t __stdcall nvdaController_brailleMessage(const wchar_t* text) {
	return _nvdaController_brailleMessage(text);
}

error_status_t __stdcall nvdaController_testIfRunning() {
	return 0;
}

__declspec(dllexport) error_status_t(__stdcall *_nvdaController_inputLangChangeNotify)(const long, const unsigned long, const wchar_t*);
error_status_t __stdcall nvdaController_inputLangChangeNotify(const long threadID, const unsigned long hkl, const wchar_t* layoutString) {
	return _nvdaController_inputLangChangeNotify(threadID,hkl,layoutString);
}
