// fichero 5341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5341;

Registro5341 crear_registro5341(int id) {
    Registro5341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5341(Registro5341 r) {
    return r.valor + r.id;
}
