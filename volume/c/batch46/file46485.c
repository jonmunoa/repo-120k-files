// fichero 46485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46485;

Registro46485 crear_registro46485(int id) {
    Registro46485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46485(Registro46485 r) {
    return r.valor + r.id;
}
