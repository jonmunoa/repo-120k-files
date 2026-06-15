// fichero 22769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22769;

Registro22769 crear_registro22769(int id) {
    Registro22769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
