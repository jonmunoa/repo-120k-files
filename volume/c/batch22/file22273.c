// fichero 22273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22273;

Registro22273 crear_registro22273(int id) {
    Registro22273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
