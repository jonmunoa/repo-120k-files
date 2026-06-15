// fichero 13769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13769;

Registro13769 crear_registro13769(int id) {
    Registro13769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
