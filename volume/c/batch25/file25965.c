// fichero 25965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25965;

Registro25965 crear_registro25965(int id) {
    Registro25965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25965(Registro25965 r) {
    return r.valor + r.id;
}
