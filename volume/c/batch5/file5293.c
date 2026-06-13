// fichero 5293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5293;

Registro5293 crear_registro5293(int id) {
    Registro5293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5293(Registro5293 r) {
    return r.valor + r.id;
}
