// fichero 13257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13257;

Registro13257 crear_registro13257(int id) {
    Registro13257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
