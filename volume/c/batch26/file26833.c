// fichero 26833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26833;

Registro26833 crear_registro26833(int id) {
    Registro26833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
