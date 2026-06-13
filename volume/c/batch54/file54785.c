// fichero 54785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54785;

Registro54785 crear_registro54785(int id) {
    Registro54785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54785(Registro54785 r) {
    return r.valor + r.id;
}
