// fichero 48813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48813;

Registro48813 crear_registro48813(int id) {
    Registro48813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
