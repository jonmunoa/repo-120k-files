// fichero 54709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54709;

Registro54709 crear_registro54709(int id) {
    Registro54709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54709(Registro54709 r) {
    return r.valor + r.id;
}
