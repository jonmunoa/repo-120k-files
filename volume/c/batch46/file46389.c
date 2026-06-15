// fichero 46389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46389;

Registro46389 crear_registro46389(int id) {
    Registro46389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
