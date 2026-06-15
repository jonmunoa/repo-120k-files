// fichero 22557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22557;

Registro22557 crear_registro22557(int id) {
    Registro22557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
