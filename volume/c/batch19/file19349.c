// fichero 19349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19349;

Registro19349 crear_registro19349(int id) {
    Registro19349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
