// fichero 22833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22833;

Registro22833 crear_registro22833(int id) {
    Registro22833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
