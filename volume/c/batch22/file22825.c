// fichero 22825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22825;

Registro22825 crear_registro22825(int id) {
    Registro22825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
