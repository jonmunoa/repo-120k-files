// fichero 34585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34585;

Registro34585 crear_registro34585(int id) {
    Registro34585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34585(Registro34585 r) {
    return r.valor + r.id;
}
