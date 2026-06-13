// fichero 38449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38449;

Registro38449 crear_registro38449(int id) {
    Registro38449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38449(Registro38449 r) {
    return r.valor + r.id;
}
