// fichero 25685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25685;

Registro25685 crear_registro25685(int id) {
    Registro25685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25685(Registro25685 r) {
    return r.valor + r.id;
}
