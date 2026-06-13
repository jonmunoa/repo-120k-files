// fichero 54549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54549;

Registro54549 crear_registro54549(int id) {
    Registro54549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54549(Registro54549 r) {
    return r.valor + r.id;
}
