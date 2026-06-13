// fichero 5437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5437;

Registro5437 crear_registro5437(int id) {
    Registro5437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5437(Registro5437 r) {
    return r.valor + r.id;
}
