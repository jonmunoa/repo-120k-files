// fichero 22505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22505;

Registro22505 crear_registro22505(int id) {
    Registro22505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
