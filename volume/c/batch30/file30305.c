// fichero 30305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30305;

Registro30305 crear_registro30305(int id) {
    Registro30305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30305(Registro30305 r) {
    return r.valor + r.id;
}
