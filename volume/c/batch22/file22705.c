// fichero 22705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22705;

Registro22705 crear_registro22705(int id) {
    Registro22705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
