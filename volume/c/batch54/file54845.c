// fichero 54845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54845;

Registro54845 crear_registro54845(int id) {
    Registro54845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54845(Registro54845 r) {
    return r.valor + r.id;
}
