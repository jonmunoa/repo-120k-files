// fichero 34405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34405;

Registro34405 crear_registro34405(int id) {
    Registro34405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34405(Registro34405 r) {
    return r.valor + r.id;
}
