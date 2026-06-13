// fichero 31665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31665;

Registro31665 crear_registro31665(int id) {
    Registro31665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31665(Registro31665 r) {
    return r.valor + r.id;
}
