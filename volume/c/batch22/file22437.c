// fichero 22437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22437;

Registro22437 crear_registro22437(int id) {
    Registro22437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
