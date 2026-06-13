// fichero 30237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30237;

Registro30237 crear_registro30237(int id) {
    Registro30237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30237(Registro30237 r) {
    return r.valor + r.id;
}
