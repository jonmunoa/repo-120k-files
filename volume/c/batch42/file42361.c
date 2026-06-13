// fichero 42361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42361;

Registro42361 crear_registro42361(int id) {
    Registro42361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42361(Registro42361 r) {
    return r.valor + r.id;
}
