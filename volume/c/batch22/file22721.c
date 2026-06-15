// fichero 22721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22721;

Registro22721 crear_registro22721(int id) {
    Registro22721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
