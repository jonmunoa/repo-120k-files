// fichero 14537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14537;

Registro14537 crear_registro14537(int id) {
    Registro14537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
