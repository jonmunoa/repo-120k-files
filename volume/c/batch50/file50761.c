// fichero 50761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50761;

Registro50761 crear_registro50761(int id) {
    Registro50761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50761(Registro50761 r) {
    return r.valor + r.id;
}
