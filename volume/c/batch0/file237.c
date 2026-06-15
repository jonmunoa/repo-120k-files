// fichero 237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro237;

Registro237 crear_registro237(int id) {
    Registro237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
