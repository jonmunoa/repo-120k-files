// fichero 13393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13393;

Registro13393 crear_registro13393(int id) {
    Registro13393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
