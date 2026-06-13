// fichero 16533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16533;

Registro16533 crear_registro16533(int id) {
    Registro16533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16533(Registro16533 r) {
    return r.valor + r.id;
}
