// fichero 37365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37365;

Registro37365 crear_registro37365(int id) {
    Registro37365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37365(Registro37365 r) {
    return r.valor + r.id;
}
