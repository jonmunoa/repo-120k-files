// fichero 47481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47481;

Registro47481 crear_registro47481(int id) {
    Registro47481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47481(Registro47481 r) {
    return r.valor + r.id;
}
