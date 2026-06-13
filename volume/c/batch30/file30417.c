// fichero 30417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30417;

Registro30417 crear_registro30417(int id) {
    Registro30417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30417(Registro30417 r) {
    return r.valor + r.id;
}
