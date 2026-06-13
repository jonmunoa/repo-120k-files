// fichero 30785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30785;

Registro30785 crear_registro30785(int id) {
    Registro30785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30785(Registro30785 r) {
    return r.valor + r.id;
}
