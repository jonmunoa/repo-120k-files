// fichero 16597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16597;

Registro16597 crear_registro16597(int id) {
    Registro16597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
