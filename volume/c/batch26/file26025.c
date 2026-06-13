// fichero 26025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26025;

Registro26025 crear_registro26025(int id) {
    Registro26025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26025(Registro26025 r) {
    return r.valor + r.id;
}
