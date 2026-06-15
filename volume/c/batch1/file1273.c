// fichero 1273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1273;

Registro1273 crear_registro1273(int id) {
    Registro1273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
