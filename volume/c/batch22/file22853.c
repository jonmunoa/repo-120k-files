// fichero 22853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22853;

Registro22853 crear_registro22853(int id) {
    Registro22853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
