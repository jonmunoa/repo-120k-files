// fichero 8025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8025;

Registro8025 crear_registro8025(int id) {
    Registro8025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8025(Registro8025 r) {
    return r.valor + r.id;
}
