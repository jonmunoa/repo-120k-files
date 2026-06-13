// fichero 37277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37277;

Registro37277 crear_registro37277(int id) {
    Registro37277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37277(Registro37277 r) {
    return r.valor + r.id;
}
