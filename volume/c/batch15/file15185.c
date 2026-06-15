// fichero 15185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15185;

Registro15185 crear_registro15185(int id) {
    Registro15185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
