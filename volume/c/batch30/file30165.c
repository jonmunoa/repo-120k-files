// fichero 30165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30165;

Registro30165 crear_registro30165(int id) {
    Registro30165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30165(Registro30165 r) {
    return r.valor + r.id;
}
