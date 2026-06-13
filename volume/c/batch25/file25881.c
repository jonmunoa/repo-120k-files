// fichero 25881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25881;

Registro25881 crear_registro25881(int id) {
    Registro25881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25881(Registro25881 r) {
    return r.valor + r.id;
}
