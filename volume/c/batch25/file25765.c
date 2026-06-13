// fichero 25765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25765;

Registro25765 crear_registro25765(int id) {
    Registro25765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25765(Registro25765 r) {
    return r.valor + r.id;
}
