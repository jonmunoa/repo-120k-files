// fichero 49597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49597;

Registro49597 crear_registro49597(int id) {
    Registro49597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
