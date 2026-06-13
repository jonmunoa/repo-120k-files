// fichero 25661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25661;

Registro25661 crear_registro25661(int id) {
    Registro25661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25661(Registro25661 r) {
    return r.valor + r.id;
}
