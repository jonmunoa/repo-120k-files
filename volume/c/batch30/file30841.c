// fichero 30841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30841;

Registro30841 crear_registro30841(int id) {
    Registro30841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30841(Registro30841 r) {
    return r.valor + r.id;
}
