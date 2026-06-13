// fichero 25977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25977;

Registro25977 crear_registro25977(int id) {
    Registro25977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25977(Registro25977 r) {
    return r.valor + r.id;
}
