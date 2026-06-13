// fichero 39025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39025;

Registro39025 crear_registro39025(int id) {
    Registro39025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39025(Registro39025 r) {
    return r.valor + r.id;
}
