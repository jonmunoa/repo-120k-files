// fichero 49237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49237;

Registro49237 crear_registro49237(int id) {
    Registro49237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49237(Registro49237 r) {
    return r.valor + r.id;
}
