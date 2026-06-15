// fichero 45389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45389;

Registro45389 crear_registro45389(int id) {
    Registro45389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
