// fichero 25289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25289;

Registro25289 crear_registro25289(int id) {
    Registro25289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25289(Registro25289 r) {
    return r.valor + r.id;
}
