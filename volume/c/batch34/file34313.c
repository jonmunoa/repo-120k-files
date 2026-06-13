// fichero 34313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34313;

Registro34313 crear_registro34313(int id) {
    Registro34313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34313(Registro34313 r) {
    return r.valor + r.id;
}
