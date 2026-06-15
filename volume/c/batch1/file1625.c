// fichero 1625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1625;

Registro1625 crear_registro1625(int id) {
    Registro1625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
