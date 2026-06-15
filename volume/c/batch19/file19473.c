// fichero 19473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19473;

Registro19473 crear_registro19473(int id) {
    Registro19473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
