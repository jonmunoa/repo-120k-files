// fichero 30949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30949;

Registro30949 crear_registro30949(int id) {
    Registro30949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30949(Registro30949 r) {
    return r.valor + r.id;
}
