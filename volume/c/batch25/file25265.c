// fichero 25265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25265;

Registro25265 crear_registro25265(int id) {
    Registro25265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25265(Registro25265 r) {
    return r.valor + r.id;
}
