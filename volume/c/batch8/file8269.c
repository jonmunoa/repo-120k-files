// fichero 8269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8269;

Registro8269 crear_registro8269(int id) {
    Registro8269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
