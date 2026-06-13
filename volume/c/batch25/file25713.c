// fichero 25713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25713;

Registro25713 crear_registro25713(int id) {
    Registro25713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25713(Registro25713 r) {
    return r.valor + r.id;
}
