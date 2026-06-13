// fichero 25277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25277;

Registro25277 crear_registro25277(int id) {
    Registro25277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25277(Registro25277 r) {
    return r.valor + r.id;
}
