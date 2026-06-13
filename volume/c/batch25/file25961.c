// fichero 25961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25961;

Registro25961 crear_registro25961(int id) {
    Registro25961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25961(Registro25961 r) {
    return r.valor + r.id;
}
