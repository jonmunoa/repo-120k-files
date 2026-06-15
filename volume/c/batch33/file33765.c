// fichero 33765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33765;

Registro33765 crear_registro33765(int id) {
    Registro33765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
