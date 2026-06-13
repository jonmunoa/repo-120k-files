// fichero 26589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26589;

Registro26589 crear_registro26589(int id) {
    Registro26589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26589(Registro26589 r) {
    return r.valor + r.id;
}
