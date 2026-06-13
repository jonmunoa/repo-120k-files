// fichero 30169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30169;

Registro30169 crear_registro30169(int id) {
    Registro30169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30169(Registro30169 r) {
    return r.valor + r.id;
}
