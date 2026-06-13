// fichero 25025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25025;

Registro25025 crear_registro25025(int id) {
    Registro25025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25025(Registro25025 r) {
    return r.valor + r.id;
}
