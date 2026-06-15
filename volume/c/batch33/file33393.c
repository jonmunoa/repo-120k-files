// fichero 33393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33393;

Registro33393 crear_registro33393(int id) {
    Registro33393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
