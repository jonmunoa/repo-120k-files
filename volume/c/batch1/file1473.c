// fichero 1473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1473;

Registro1473 crear_registro1473(int id) {
    Registro1473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
