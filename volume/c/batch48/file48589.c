// fichero 48589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48589;

Registro48589 crear_registro48589(int id) {
    Registro48589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48589(Registro48589 r) {
    return r.valor + r.id;
}
