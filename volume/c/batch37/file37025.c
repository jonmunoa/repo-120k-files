// fichero 37025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37025;

Registro37025 crear_registro37025(int id) {
    Registro37025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37025(Registro37025 r) {
    return r.valor + r.id;
}
