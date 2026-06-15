// fichero 22593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22593;

Registro22593 crear_registro22593(int id) {
    Registro22593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
