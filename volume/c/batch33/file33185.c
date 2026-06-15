// fichero 33185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33185;

Registro33185 crear_registro33185(int id) {
    Registro33185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
