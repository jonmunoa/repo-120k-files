// fichero 3449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3449;

Registro3449 crear_registro3449(int id) {
    Registro3449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3449(Registro3449 r) {
    return r.valor + r.id;
}
