// fichero 12125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12125;

Registro12125 crear_registro12125(int id) {
    Registro12125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12125(Registro12125 r) {
    return r.valor + r.id;
}
