// fichero 13525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13525;

Registro13525 crear_registro13525(int id) {
    Registro13525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
