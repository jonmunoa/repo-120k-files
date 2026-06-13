// fichero 34665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34665;

Registro34665 crear_registro34665(int id) {
    Registro34665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34665(Registro34665 r) {
    return r.valor + r.id;
}
