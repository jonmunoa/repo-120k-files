// fichero 32561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32561;

Registro32561 crear_registro32561(int id) {
    Registro32561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
