// fichero 15025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15025;

Registro15025 crear_registro15025(int id) {
    Registro15025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15025(Registro15025 r) {
    return r.valor + r.id;
}
