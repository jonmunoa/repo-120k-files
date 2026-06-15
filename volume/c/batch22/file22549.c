// fichero 22549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22549;

Registro22549 crear_registro22549(int id) {
    Registro22549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
