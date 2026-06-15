// fichero 22429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22429;

Registro22429 crear_registro22429(int id) {
    Registro22429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
