// fichero 15837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15837;

Registro15837 crear_registro15837(int id) {
    Registro15837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
