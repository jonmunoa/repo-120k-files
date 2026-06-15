// fichero 29537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29537;

Registro29537 crear_registro29537(int id) {
    Registro29537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
