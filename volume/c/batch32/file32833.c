// fichero 32833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32833;

Registro32833 crear_registro32833(int id) {
    Registro32833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
