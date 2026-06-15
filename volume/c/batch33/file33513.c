// fichero 33513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33513;

Registro33513 crear_registro33513(int id) {
    Registro33513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
