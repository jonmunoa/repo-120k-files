// fichero 29337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29337;

Registro29337 crear_registro29337(int id) {
    Registro29337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
