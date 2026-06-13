// fichero 25169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25169;

Registro25169 crear_registro25169(int id) {
    Registro25169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25169(Registro25169 r) {
    return r.valor + r.id;
}
