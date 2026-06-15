// fichero 33721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33721;

Registro33721 crear_registro33721(int id) {
    Registro33721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
