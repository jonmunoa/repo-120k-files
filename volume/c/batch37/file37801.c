// fichero 37801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37801;

Registro37801 crear_registro37801(int id) {
    Registro37801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37801(Registro37801 r) {
    return r.valor + r.id;
}
