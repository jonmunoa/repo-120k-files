// fichero 421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro421;

Registro421 crear_registro421(int id) {
    Registro421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro421(Registro421 r) {
    return r.valor + r.id;
}
