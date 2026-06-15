// fichero 22501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22501;

Registro22501 crear_registro22501(int id) {
    Registro22501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
