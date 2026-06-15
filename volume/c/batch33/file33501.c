// fichero 33501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33501;

Registro33501 crear_registro33501(int id) {
    Registro33501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
