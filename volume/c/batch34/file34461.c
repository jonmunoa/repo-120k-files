// fichero 34461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34461;

Registro34461 crear_registro34461(int id) {
    Registro34461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
