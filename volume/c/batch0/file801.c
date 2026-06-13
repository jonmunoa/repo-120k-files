// fichero 801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro801;

Registro801 crear_registro801(int id) {
    Registro801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro801(Registro801 r) {
    return r.valor + r.id;
}
