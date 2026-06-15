// fichero 15417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15417;

Registro15417 crear_registro15417(int id) {
    Registro15417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
