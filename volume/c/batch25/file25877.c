// fichero 25877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25877;

Registro25877 crear_registro25877(int id) {
    Registro25877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25877(Registro25877 r) {
    return r.valor + r.id;
}
