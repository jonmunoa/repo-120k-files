// fichero 32469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32469;

Registro32469 crear_registro32469(int id) {
    Registro32469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32469(Registro32469 r) {
    return r.valor + r.id;
}
