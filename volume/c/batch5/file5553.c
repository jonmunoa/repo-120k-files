// fichero 5553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5553;

Registro5553 crear_registro5553(int id) {
    Registro5553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5553(Registro5553 r) {
    return r.valor + r.id;
}
