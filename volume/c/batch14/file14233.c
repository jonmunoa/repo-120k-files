// fichero 14233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14233;

Registro14233 crear_registro14233(int id) {
    Registro14233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
