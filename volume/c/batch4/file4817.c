// fichero 4817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4817;

Registro4817 crear_registro4817(int id) {
    Registro4817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4817(Registro4817 r) {
    return r.valor + r.id;
}
