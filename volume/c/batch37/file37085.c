// fichero 37085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37085;

Registro37085 crear_registro37085(int id) {
    Registro37085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37085(Registro37085 r) {
    return r.valor + r.id;
}
