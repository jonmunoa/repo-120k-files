// fichero 44253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44253;

Registro44253 crear_registro44253(int id) {
    Registro44253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
