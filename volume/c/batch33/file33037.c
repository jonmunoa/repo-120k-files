// fichero 33037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33037;

Registro33037 crear_registro33037(int id) {
    Registro33037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33037(Registro33037 r) {
    return r.valor + r.id;
}
