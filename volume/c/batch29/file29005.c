// fichero 29005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29005;

Registro29005 crear_registro29005(int id) {
    Registro29005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
