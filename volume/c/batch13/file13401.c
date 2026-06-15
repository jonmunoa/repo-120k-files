// fichero 13401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13401;

Registro13401 crear_registro13401(int id) {
    Registro13401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
