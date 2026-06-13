// fichero 20449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20449;

Registro20449 crear_registro20449(int id) {
    Registro20449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20449(Registro20449 r) {
    return r.valor + r.id;
}
