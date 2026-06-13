// fichero 20469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20469;

Registro20469 crear_registro20469(int id) {
    Registro20469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20469(Registro20469 r) {
    return r.valor + r.id;
}
