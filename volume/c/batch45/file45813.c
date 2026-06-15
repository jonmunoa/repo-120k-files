// fichero 45813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45813;

Registro45813 crear_registro45813(int id) {
    Registro45813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
