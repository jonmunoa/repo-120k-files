// fichero 21761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21761;

Registro21761 crear_registro21761(int id) {
    Registro21761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21761(Registro21761 r) {
    return r.valor + r.id;
}
