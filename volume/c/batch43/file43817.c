// fichero 43817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43817;

Registro43817 crear_registro43817(int id) {
    Registro43817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
