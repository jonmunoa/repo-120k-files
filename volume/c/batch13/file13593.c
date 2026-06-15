// fichero 13593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13593;

Registro13593 crear_registro13593(int id) {
    Registro13593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
