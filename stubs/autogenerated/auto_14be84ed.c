#include "cpptest.h"

/** 
 * This file contains auto-generated stub definitions.
 *
 * Available C++test API functions (see C++test Users Guide for details):
 *     void CppTest_Assert(bool test, const char * message)
 *     void CppTest_Break()
 *     const char* CppTest_GetCurrentTestCaseName()
 *     const char* CppTest_GetCurrentTestSuiteName()
 *     bool CppTest_IsCurrentTestCase(const char* testCaseName)
 */

/** 
 * Header files where the stubbed functions are originally declared.
 * Verify #include directives and add any additional header files as necessary.
 */

/** Auto-generated stub definition for function: int print_string(char *) */
EXTERN_C_LINKAGE int print_string (char * _MT_var29) ;
EXTERN_C_LINKAGE int CppTest_Auto_Stub_print_string (char * _MT_var23) 
{
    CPPTEST_STUB_CALLED("print_string");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return, char * _MT_var23)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("print_string", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = print_string(_MT_var23);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return, char * _MT_var23);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, _MT_var23);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}
