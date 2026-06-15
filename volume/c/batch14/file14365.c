// fichero 14365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14365;

Registro14365 crear_registro14365(int id) {
    Registro14365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
