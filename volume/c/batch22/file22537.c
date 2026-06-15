// fichero 22537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22537;

Registro22537 crear_registro22537(int id) {
    Registro22537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
