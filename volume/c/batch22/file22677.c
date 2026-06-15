// fichero 22677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22677;

Registro22677 crear_registro22677(int id) {
    Registro22677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
