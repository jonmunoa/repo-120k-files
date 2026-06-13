// fichero 5561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5561;

Registro5561 crear_registro5561(int id) {
    Registro5561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5561(Registro5561 r) {
    return r.valor + r.id;
}
