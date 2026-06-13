// fichero 7449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7449;

Registro7449 crear_registro7449(int id) {
    Registro7449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7449(Registro7449 r) {
    return r.valor + r.id;
}
