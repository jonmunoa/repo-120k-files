// fichero 13317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13317;

Registro13317 crear_registro13317(int id) {
    Registro13317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
