// fichero 8313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8313;

Registro8313 crear_registro8313(int id) {
    Registro8313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8313(Registro8313 r) {
    return r.valor + r.id;
}
