// fichero 45449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45449;

Registro45449 crear_registro45449(int id) {
    Registro45449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45449(Registro45449 r) {
    return r.valor + r.id;
}
