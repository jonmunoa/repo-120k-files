// fichero 14601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14601;

Registro14601 crear_registro14601(int id) {
    Registro14601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
