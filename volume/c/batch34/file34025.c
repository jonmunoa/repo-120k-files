// fichero 34025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34025;

Registro34025 crear_registro34025(int id) {
    Registro34025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34025(Registro34025 r) {
    return r.valor + r.id;
}
