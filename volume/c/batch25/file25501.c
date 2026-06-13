// fichero 25501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25501;

Registro25501 crear_registro25501(int id) {
    Registro25501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25501(Registro25501 r) {
    return r.valor + r.id;
}
