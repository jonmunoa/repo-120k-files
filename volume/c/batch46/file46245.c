// fichero 46245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46245;

Registro46245 crear_registro46245(int id) {
    Registro46245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
