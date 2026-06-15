// fichero 13661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13661;

Registro13661 crear_registro13661(int id) {
    Registro13661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
