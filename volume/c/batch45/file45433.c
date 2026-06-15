// fichero 45433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45433;

Registro45433 crear_registro45433(int id) {
    Registro45433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
