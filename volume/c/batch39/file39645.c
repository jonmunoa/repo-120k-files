// fichero 39645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39645;

Registro39645 crear_registro39645(int id) {
    Registro39645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39645(Registro39645 r) {
    return r.valor + r.id;
}
