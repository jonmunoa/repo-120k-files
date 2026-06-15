// fichero 13865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13865;

Registro13865 crear_registro13865(int id) {
    Registro13865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
