// fichero 35413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35413;

Registro35413 crear_registro35413(int id) {
    Registro35413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
