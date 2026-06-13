// fichero 25561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25561;

Registro25561 crear_registro25561(int id) {
    Registro25561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25561(Registro25561 r) {
    return r.valor + r.id;
}
