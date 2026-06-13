// fichero 16357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16357;

Registro16357 crear_registro16357(int id) {
    Registro16357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16357(Registro16357 r) {
    return r.valor + r.id;
}
