// fichero 13577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13577;

Registro13577 crear_registro13577(int id) {
    Registro13577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
