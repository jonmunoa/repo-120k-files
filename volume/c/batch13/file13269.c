// fichero 13269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13269;

Registro13269 crear_registro13269(int id) {
    Registro13269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
