// fichero 43721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43721;

Registro43721 crear_registro43721(int id) {
    Registro43721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
