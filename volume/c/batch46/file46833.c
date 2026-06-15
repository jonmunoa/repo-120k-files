// fichero 46833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46833;

Registro46833 crear_registro46833(int id) {
    Registro46833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
