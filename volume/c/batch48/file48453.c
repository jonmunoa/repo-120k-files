// fichero 48453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48453;

Registro48453 crear_registro48453(int id) {
    Registro48453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
