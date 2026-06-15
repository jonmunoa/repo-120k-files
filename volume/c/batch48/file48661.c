// fichero 48661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48661;

Registro48661 crear_registro48661(int id) {
    Registro48661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
