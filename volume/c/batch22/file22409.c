// fichero 22409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22409;

Registro22409 crear_registro22409(int id) {
    Registro22409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
