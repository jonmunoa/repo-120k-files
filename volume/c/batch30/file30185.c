// fichero 30185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30185;

Registro30185 crear_registro30185(int id) {
    Registro30185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30185(Registro30185 r) {
    return r.valor + r.id;
}
