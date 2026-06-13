// fichero 21385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21385;

Registro21385 crear_registro21385(int id) {
    Registro21385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21385(Registro21385 r) {
    return r.valor + r.id;
}
