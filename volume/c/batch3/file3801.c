// fichero 3801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3801;

Registro3801 crear_registro3801(int id) {
    Registro3801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3801(Registro3801 r) {
    return r.valor + r.id;
}
