// fichero 22641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22641;

Registro22641 crear_registro22641(int id) {
    Registro22641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
