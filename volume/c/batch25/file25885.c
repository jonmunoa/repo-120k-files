// fichero 25885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25885;

Registro25885 crear_registro25885(int id) {
    Registro25885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25885(Registro25885 r) {
    return r.valor + r.id;
}
