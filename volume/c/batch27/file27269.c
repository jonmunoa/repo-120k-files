// fichero 27269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27269;

Registro27269 crear_registro27269(int id) {
    Registro27269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
