// fichero 1377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1377;

Registro1377 crear_registro1377(int id) {
    Registro1377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
