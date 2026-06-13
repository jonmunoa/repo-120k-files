// fichero 24837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24837;

Registro24837 crear_registro24837(int id) {
    Registro24837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24837(Registro24837 r) {
    return r.valor + r.id;
}
