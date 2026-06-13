// fichero 47685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47685;

Registro47685 crear_registro47685(int id) {
    Registro47685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47685(Registro47685 r) {
    return r.valor + r.id;
}
