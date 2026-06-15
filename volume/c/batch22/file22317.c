// fichero 22317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22317;

Registro22317 crear_registro22317(int id) {
    Registro22317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
