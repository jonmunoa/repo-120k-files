// fichero 46137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46137;

Registro46137 crear_registro46137(int id) {
    Registro46137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
