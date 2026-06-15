// fichero 28521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28521;

Registro28521 crear_registro28521(int id) {
    Registro28521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
