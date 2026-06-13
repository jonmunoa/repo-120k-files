// fichero 42449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42449;

Registro42449 crear_registro42449(int id) {
    Registro42449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42449(Registro42449 r) {
    return r.valor + r.id;
}
