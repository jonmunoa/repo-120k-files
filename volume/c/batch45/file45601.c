// fichero 45601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45601;

Registro45601 crear_registro45601(int id) {
    Registro45601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
