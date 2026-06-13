// fichero 32585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32585;

Registro32585 crear_registro32585(int id) {
    Registro32585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32585(Registro32585 r) {
    return r.valor + r.id;
}
