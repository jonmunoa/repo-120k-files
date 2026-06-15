// fichero 15573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15573;

Registro15573 crear_registro15573(int id) {
    Registro15573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
