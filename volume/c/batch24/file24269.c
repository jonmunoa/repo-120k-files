// fichero 24269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24269;

Registro24269 crear_registro24269(int id) {
    Registro24269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
