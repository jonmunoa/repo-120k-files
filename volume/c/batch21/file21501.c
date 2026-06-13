// fichero 21501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21501;

Registro21501 crear_registro21501(int id) {
    Registro21501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21501(Registro21501 r) {
    return r.valor + r.id;
}
