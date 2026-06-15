// fichero 33921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33921;

Registro33921 crear_registro33921(int id) {
    Registro33921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
