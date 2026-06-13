// fichero 30749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30749;

Registro30749 crear_registro30749(int id) {
    Registro30749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30749(Registro30749 r) {
    return r.valor + r.id;
}
