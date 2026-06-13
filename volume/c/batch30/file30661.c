// fichero 30661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30661;

Registro30661 crear_registro30661(int id) {
    Registro30661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30661(Registro30661 r) {
    return r.valor + r.id;
}
