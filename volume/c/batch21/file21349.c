// fichero 21349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21349;

Registro21349 crear_registro21349(int id) {
    Registro21349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
