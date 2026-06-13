// fichero 21605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21605;

Registro21605 crear_registro21605(int id) {
    Registro21605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21605(Registro21605 r) {
    return r.valor + r.id;
}
