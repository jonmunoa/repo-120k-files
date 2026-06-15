// fichero 47409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47409;

Registro47409 crear_registro47409(int id) {
    Registro47409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
