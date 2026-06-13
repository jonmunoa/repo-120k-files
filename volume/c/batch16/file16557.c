// fichero 16557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16557;

Registro16557 crear_registro16557(int id) {
    Registro16557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16557(Registro16557 r) {
    return r.valor + r.id;
}
