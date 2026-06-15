// fichero 13737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13737;

Registro13737 crear_registro13737(int id) {
    Registro13737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
