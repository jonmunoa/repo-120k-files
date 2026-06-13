// fichero 30217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30217;

Registro30217 crear_registro30217(int id) {
    Registro30217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30217(Registro30217 r) {
    return r.valor + r.id;
}
