// fichero 30549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30549;

Registro30549 crear_registro30549(int id) {
    Registro30549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30549(Registro30549 r) {
    return r.valor + r.id;
}
