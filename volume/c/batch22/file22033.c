// fichero 22033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22033;

Registro22033 crear_registro22033(int id) {
    Registro22033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
