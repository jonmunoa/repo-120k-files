// fichero 3541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3541;

Registro3541 crear_registro3541(int id) {
    Registro3541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3541(Registro3541 r) {
    return r.valor + r.id;
}
