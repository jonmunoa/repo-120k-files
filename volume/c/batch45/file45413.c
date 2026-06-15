// fichero 45413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45413;

Registro45413 crear_registro45413(int id) {
    Registro45413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
