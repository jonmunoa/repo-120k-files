// fichero 25805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25805;

Registro25805 crear_registro25805(int id) {
    Registro25805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25805(Registro25805 r) {
    return r.valor + r.id;
}
