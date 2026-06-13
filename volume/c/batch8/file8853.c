// fichero 8853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8853;

Registro8853 crear_registro8853(int id) {
    Registro8853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8853(Registro8853 r) {
    return r.valor + r.id;
}
