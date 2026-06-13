// fichero 43361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43361;

Registro43361 crear_registro43361(int id) {
    Registro43361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43361(Registro43361 r) {
    return r.valor + r.id;
}
