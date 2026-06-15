// fichero 43361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43361;

Registro43361 crear_registro43361(int id) {
    Registro43361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
