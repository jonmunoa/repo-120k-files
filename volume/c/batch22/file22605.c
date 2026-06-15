// fichero 22605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22605;

Registro22605 crear_registro22605(int id) {
    Registro22605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
