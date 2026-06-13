// fichero 35105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35105;

Registro35105 crear_registro35105(int id) {
    Registro35105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35105(Registro35105 r) {
    return r.valor + r.id;
}
