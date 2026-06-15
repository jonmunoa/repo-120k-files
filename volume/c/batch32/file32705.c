// fichero 32705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32705;

Registro32705 crear_registro32705(int id) {
    Registro32705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
