// fichero 5549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5549;

Registro5549 crear_registro5549(int id) {
    Registro5549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5549(Registro5549 r) {
    return r.valor + r.id;
}
