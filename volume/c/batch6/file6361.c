// fichero 6361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6361;

Registro6361 crear_registro6361(int id) {
    Registro6361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6361(Registro6361 r) {
    return r.valor + r.id;
}
