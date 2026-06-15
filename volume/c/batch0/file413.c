// fichero 413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro413;

Registro413 crear_registro413(int id) {
    Registro413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
