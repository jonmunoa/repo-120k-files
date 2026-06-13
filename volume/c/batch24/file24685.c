// fichero 24685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24685;

Registro24685 crear_registro24685(int id) {
    Registro24685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24685(Registro24685 r) {
    return r.valor + r.id;
}
