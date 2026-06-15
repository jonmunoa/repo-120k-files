// fichero 16329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16329;

Registro16329 crear_registro16329(int id) {
    Registro16329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
