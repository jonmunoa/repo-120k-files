// fichero 22717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22717;

Registro22717 crear_registro22717(int id) {
    Registro22717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
