// fichero 22393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22393;

Registro22393 crear_registro22393(int id) {
    Registro22393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
