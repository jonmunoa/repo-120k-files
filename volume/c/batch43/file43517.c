// fichero 43517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43517;

Registro43517 crear_registro43517(int id) {
    Registro43517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
