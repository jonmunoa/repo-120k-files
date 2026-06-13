// fichero 45025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45025;

Registro45025 crear_registro45025(int id) {
    Registro45025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45025(Registro45025 r) {
    return r.valor + r.id;
}
