// fichero 23601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23601;

Registro23601 crear_registro23601(int id) {
    Registro23601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
