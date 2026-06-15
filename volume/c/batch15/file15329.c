// fichero 15329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15329;

Registro15329 crear_registro15329(int id) {
    Registro15329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
