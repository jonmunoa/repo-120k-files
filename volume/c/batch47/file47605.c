// fichero 47605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47605;

Registro47605 crear_registro47605(int id) {
    Registro47605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47605(Registro47605 r) {
    return r.valor + r.id;
}
