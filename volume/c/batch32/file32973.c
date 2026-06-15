// fichero 32973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32973;

Registro32973 crear_registro32973(int id) {
    Registro32973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
