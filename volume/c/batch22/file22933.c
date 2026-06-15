// fichero 22933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22933;

Registro22933 crear_registro22933(int id) {
    Registro22933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
