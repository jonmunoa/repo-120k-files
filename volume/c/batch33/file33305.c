// fichero 33305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33305;

Registro33305 crear_registro33305(int id) {
    Registro33305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
