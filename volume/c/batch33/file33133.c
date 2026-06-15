// fichero 33133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33133;

Registro33133 crear_registro33133(int id) {
    Registro33133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
