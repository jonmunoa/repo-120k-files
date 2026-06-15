// fichero 13721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13721;

Registro13721 crear_registro13721(int id) {
    Registro13721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
