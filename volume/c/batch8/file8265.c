// fichero 8265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8265;

Registro8265 crear_registro8265(int id) {
    Registro8265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8265(Registro8265 r) {
    return r.valor + r.id;
}
