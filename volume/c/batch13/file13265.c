// fichero 13265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13265;

Registro13265 crear_registro13265(int id) {
    Registro13265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
