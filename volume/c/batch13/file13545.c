// fichero 13545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13545;

Registro13545 crear_registro13545(int id) {
    Registro13545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
