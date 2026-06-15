// fichero 13241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13241;

Registro13241 crear_registro13241(int id) {
    Registro13241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
