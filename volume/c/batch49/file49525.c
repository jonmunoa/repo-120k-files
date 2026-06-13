// fichero 49525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49525;

Registro49525 crear_registro49525(int id) {
    Registro49525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49525(Registro49525 r) {
    return r.valor + r.id;
}
