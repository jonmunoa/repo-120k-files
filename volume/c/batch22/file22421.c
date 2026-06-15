// fichero 22421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22421;

Registro22421 crear_registro22421(int id) {
    Registro22421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
