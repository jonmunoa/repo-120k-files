// fichero 22077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22077;

Registro22077 crear_registro22077(int id) {
    Registro22077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
