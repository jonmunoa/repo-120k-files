// fichero 50557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50557;

Registro50557 crear_registro50557(int id) {
    Registro50557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50557(Registro50557 r) {
    return r.valor + r.id;
}
