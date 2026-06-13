// fichero 6025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6025;

Registro6025 crear_registro6025(int id) {
    Registro6025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6025(Registro6025 r) {
    return r.valor + r.id;
}
