// fichero 25109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25109;

Registro25109 crear_registro25109(int id) {
    Registro25109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25109(Registro25109 r) {
    return r.valor + r.id;
}
