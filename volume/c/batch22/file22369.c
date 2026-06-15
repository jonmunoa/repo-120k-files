// fichero 22369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22369;

Registro22369 crear_registro22369(int id) {
    Registro22369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
