// fichero 33233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33233;

Registro33233 crear_registro33233(int id) {
    Registro33233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
