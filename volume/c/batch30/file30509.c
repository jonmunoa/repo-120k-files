// fichero 30509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30509;

Registro30509 crear_registro30509(int id) {
    Registro30509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30509(Registro30509 r) {
    return r.valor + r.id;
}
