// fichero 4341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4341;

Registro4341 crear_registro4341(int id) {
    Registro4341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
