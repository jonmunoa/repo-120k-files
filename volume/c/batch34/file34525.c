// fichero 34525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34525;

Registro34525 crear_registro34525(int id) {
    Registro34525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34525(Registro34525 r) {
    return r.valor + r.id;
}
