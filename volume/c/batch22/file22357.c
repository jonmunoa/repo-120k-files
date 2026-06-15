// fichero 22357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22357;

Registro22357 crear_registro22357(int id) {
    Registro22357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
