// fichero 473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro473;

Registro473 crear_registro473(int id) {
    Registro473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
