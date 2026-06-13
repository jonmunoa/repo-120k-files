// fichero 24341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24341;

Registro24341 crear_registro24341(int id) {
    Registro24341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24341(Registro24341 r) {
    return r.valor + r.id;
}
