// fichero 15293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15293;

Registro15293 crear_registro15293(int id) {
    Registro15293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
