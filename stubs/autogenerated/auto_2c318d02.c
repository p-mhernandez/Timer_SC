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

/** Auto-generated stub definition for function: void list_timers(void) */
EXTERN_C_LINKAGE void list_timers () ;
EXTERN_C_LINKAGE void CppTest_Auto_Stub_list_timers (void) 
{
    CPPTEST_STUB_CALLED("list_timers");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("list_timers", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     list_timers();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS();
        CPPTEST_STUB_INVOKE_CALLBACK();

    } else {
        /* You can put additional stub logic here. */

    }

}

/** Auto-generated stub definition for function: void init_timer(void) */
EXTERN_C_LINKAGE void init_timer () ;
EXTERN_C_LINKAGE void CppTest_Auto_Stub_init_timer (void) 
{
    CPPTEST_STUB_CALLED("init_timer");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("init_timer", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     init_timer();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS();
        CPPTEST_STUB_INVOKE_CALLBACK();

    } else {
        /* You can put additional stub logic here. */

    }

}

/** Auto-generated stub definition for function: void delete_timer_record(int) */
EXTERN_C_LINKAGE void delete_timer_record (int _MT_var11) ;
EXTERN_C_LINKAGE void CppTest_Auto_Stub_delete_timer_record (int _MT_var8) 
{
    CPPTEST_STUB_CALLED("delete_timer_record");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int _MT_var8)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("delete_timer_record", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     delete_timer_record(_MT_var8);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int _MT_var8);
        CPPTEST_STUB_INVOKE_CALLBACK(_MT_var8);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** Auto-generated stub definition for function: int add_timer(void) */
EXTERN_C_LINKAGE int add_timer () ;
EXTERN_C_LINKAGE int CppTest_Auto_Stub_add_timer (void) 
{
    CPPTEST_STUB_CALLED("add_timer");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("add_timer", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = add_timer();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** Auto-generated stub definition for function: int get_input_digit(void) */
EXTERN_C_LINKAGE int get_input_digit () ;
EXTERN_C_LINKAGE int CppTest_Auto_Stub_get_input_digit (void) 
{
    CPPTEST_STUB_CALLED("get_input_digit");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("get_input_digit", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = get_input_digit();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** Auto-generated stub definition for function: void uninit_timer(void) */
EXTERN_C_LINKAGE void uninit_timer () ;
EXTERN_C_LINKAGE void CppTest_Auto_Stub_uninit_timer (void) 
{
    CPPTEST_STUB_CALLED("uninit_timer");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("uninit_timer", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     uninit_timer();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS();
        CPPTEST_STUB_INVOKE_CALLBACK();

    } else {
        /* You can put additional stub logic here. */

    }

}

/** Auto-generated stub definition for function: void display_time(void) */
EXTERN_C_LINKAGE void display_time () ;
EXTERN_C_LINKAGE void CppTest_Auto_Stub_display_time (void) 
{
    CPPTEST_STUB_CALLED("display_time");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("display_time", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     display_time();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS();
        CPPTEST_STUB_INVOKE_CALLBACK();

    } else {
        /* You can put additional stub logic here. */

    }

}
