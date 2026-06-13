// fichero 27449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27449;

Registro27449 crear_registro27449(int id) {
    Registro27449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27449(Registro27449 r) {
    return r.valor + r.id;
}
