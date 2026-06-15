// fichero 14377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14377;

Registro14377 crear_registro14377(int id) {
    Registro14377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
