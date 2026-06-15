// fichero 13557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13557;

Registro13557 crear_registro13557(int id) {
    Registro13557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
