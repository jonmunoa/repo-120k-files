// fichero 30493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30493;

Registro30493 crear_registro30493(int id) {
    Registro30493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30493(Registro30493 r) {
    return r.valor + r.id;
}
