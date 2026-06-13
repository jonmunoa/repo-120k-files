// fichero 21025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21025;

Registro21025 crear_registro21025(int id) {
    Registro21025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21025(Registro21025 r) {
    return r.valor + r.id;
}
