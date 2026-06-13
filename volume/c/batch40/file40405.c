// fichero 40405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40405;

Registro40405 crear_registro40405(int id) {
    Registro40405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40405(Registro40405 r) {
    return r.valor + r.id;
}
