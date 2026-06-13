// fichero 5757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5757;

Registro5757 crear_registro5757(int id) {
    Registro5757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5757(Registro5757 r) {
    return r.valor + r.id;
}
