// fichero 1297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1297;

Registro1297 crear_registro1297(int id) {
    Registro1297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
