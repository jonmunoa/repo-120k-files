// fichero 32025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32025;

Registro32025 crear_registro32025(int id) {
    Registro32025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32025(Registro32025 r) {
    return r.valor + r.id;
}
