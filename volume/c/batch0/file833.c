// fichero 833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro833;

Registro833 crear_registro833(int id) {
    Registro833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
