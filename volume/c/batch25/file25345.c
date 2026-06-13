// fichero 25345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25345;

Registro25345 crear_registro25345(int id) {
    Registro25345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25345(Registro25345 r) {
    return r.valor + r.id;
}
