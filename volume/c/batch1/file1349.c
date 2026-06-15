// fichero 1349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1349;

Registro1349 crear_registro1349(int id) {
    Registro1349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
