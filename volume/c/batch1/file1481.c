// fichero 1481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1481;

Registro1481 crear_registro1481(int id) {
    Registro1481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
