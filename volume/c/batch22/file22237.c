// fichero 22237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22237;

Registro22237 crear_registro22237(int id) {
    Registro22237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
