// fichero 25997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25997;

Registro25997 crear_registro25997(int id) {
    Registro25997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25997(Registro25997 r) {
    return r.valor + r.id;
}
