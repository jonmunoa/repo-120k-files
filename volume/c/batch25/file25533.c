// fichero 25533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25533;

Registro25533 crear_registro25533(int id) {
    Registro25533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25533(Registro25533 r) {
    return r.valor + r.id;
}
