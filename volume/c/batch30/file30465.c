// fichero 30465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30465;

Registro30465 crear_registro30465(int id) {
    Registro30465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30465(Registro30465 r) {
    return r.valor + r.id;
}
