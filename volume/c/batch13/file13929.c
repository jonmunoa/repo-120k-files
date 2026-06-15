// fichero 13929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13929;

Registro13929 crear_registro13929(int id) {
    Registro13929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
