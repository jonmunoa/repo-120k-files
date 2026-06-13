// fichero 25493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25493;

Registro25493 crear_registro25493(int id) {
    Registro25493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25493(Registro25493 r) {
    return r.valor + r.id;
}
