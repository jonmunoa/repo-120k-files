// fichero 25693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25693;

Registro25693 crear_registro25693(int id) {
    Registro25693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25693(Registro25693 r) {
    return r.valor + r.id;
}
