// fichero 25069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25069;

Registro25069 crear_registro25069(int id) {
    Registro25069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25069(Registro25069 r) {
    return r.valor + r.id;
}
