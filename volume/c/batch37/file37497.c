// fichero 37497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37497;

Registro37497 crear_registro37497(int id) {
    Registro37497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37497(Registro37497 r) {
    return r.valor + r.id;
}
