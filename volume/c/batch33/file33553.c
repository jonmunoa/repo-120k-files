// fichero 33553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33553;

Registro33553 crear_registro33553(int id) {
    Registro33553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
