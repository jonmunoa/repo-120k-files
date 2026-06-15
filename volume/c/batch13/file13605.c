// fichero 13605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13605;

Registro13605 crear_registro13605(int id) {
    Registro13605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
