// fichero 665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro665;

Registro665 crear_registro665(int id) {
    Registro665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro665(Registro665 r) {
    return r.valor + r.id;
}
