// fichero 1405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1405;

Registro1405 crear_registro1405(int id) {
    Registro1405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
