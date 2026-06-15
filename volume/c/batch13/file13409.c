// fichero 13409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13409;

Registro13409 crear_registro13409(int id) {
    Registro13409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
