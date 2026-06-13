// fichero 32821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32821;

Registro32821 crear_registro32821(int id) {
    Registro32821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32821(Registro32821 r) {
    return r.valor + r.id;
}
