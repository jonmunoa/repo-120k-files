// fichero 22341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22341;

Registro22341 crear_registro22341(int id) {
    Registro22341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
