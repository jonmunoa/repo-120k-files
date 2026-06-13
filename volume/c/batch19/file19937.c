// fichero 19937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19937;

Registro19937 crear_registro19937(int id) {
    Registro19937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19937(Registro19937 r) {
    return r.valor + r.id;
}
