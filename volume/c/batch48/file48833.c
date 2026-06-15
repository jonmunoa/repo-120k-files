// fichero 48833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48833;

Registro48833 crear_registro48833(int id) {
    Registro48833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
