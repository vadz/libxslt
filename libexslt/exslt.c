#include <libxml/xmlversion.h>

#if defined(WIN32) && defined(_MSC_VER)
#include <libxslt/xsltwin32config.h>
#else
#include <libxslt/xsltconfig.h>
#endif
#include <libxslt/extensions.h>

#include "exsltconfig.h"
#include "exslt.h"

const char *exsltLibraryVersion = LIBEXSLT_VERSION_STRING;
const int exsltLibexsltVersion = LIBEXSLT_VERSION;
const int exsltLibxsltVersion = LIBXSLT_VERSION;
const int exsltLibxmlVersion = LIBXML_VERSION;

/**
 * exsltRegisterAll:
 *
 * Registers all available EXSLT extensions
 */
void
exsltRegisterAll (void) {
    exsltCommonRegister();
    exsltMathRegister();
    exsltSetsRegister();
    exsltFuncRegister();
}
