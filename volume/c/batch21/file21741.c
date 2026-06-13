// fichero 21741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21741;

Registro21741 crear_registro21741(int id) {
    Registro21741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21741(Registro21741 r) {
    return r.valor + r.id;
}
