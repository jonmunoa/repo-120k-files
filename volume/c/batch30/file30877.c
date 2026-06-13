// fichero 30877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30877;

Registro30877 crear_registro30877(int id) {
    Registro30877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30877(Registro30877 r) {
    return r.valor + r.id;
}
