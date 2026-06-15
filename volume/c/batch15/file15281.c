// fichero 15281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15281;

Registro15281 crear_registro15281(int id) {
    Registro15281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
