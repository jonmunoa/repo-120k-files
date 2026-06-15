// fichero 15721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15721;

Registro15721 crear_registro15721(int id) {
    Registro15721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
