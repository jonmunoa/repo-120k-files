// fichero 22117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22117;

Registro22117 crear_registro22117(int id) {
    Registro22117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
