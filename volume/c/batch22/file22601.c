// fichero 22601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22601;

Registro22601 crear_registro22601(int id) {
    Registro22601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
