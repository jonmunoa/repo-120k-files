// fichero 4801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4801;

Registro4801 crear_registro4801(int id) {
    Registro4801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4801(Registro4801 r) {
    return r.valor + r.id;
}
