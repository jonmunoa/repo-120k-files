// fichero 33341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33341;

Registro33341 crear_registro33341(int id) {
    Registro33341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
