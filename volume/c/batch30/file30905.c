// fichero 30905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30905;

Registro30905 crear_registro30905(int id) {
    Registro30905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30905(Registro30905 r) {
    return r.valor + r.id;
}
