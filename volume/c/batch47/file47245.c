// fichero 47245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47245;

Registro47245 crear_registro47245(int id) {
    Registro47245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47245(Registro47245 r) {
    return r.valor + r.id;
}
