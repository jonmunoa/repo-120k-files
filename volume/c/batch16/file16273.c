// fichero 16273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16273;

Registro16273 crear_registro16273(int id) {
    Registro16273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
