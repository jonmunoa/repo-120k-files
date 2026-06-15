// fichero 15373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15373;

Registro15373 crear_registro15373(int id) {
    Registro15373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
