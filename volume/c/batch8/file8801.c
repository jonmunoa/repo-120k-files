// fichero 8801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8801;

Registro8801 crear_registro8801(int id) {
    Registro8801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8801(Registro8801 r) {
    return r.valor + r.id;
}
