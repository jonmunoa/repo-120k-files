// fichero 27185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27185;

Registro27185 crear_registro27185(int id) {
    Registro27185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
