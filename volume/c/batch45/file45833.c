// fichero 45833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45833;

Registro45833 crear_registro45833(int id) {
    Registro45833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
