// fichero 13825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13825;

Registro13825 crear_registro13825(int id) {
    Registro13825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
