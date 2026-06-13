// fichero 30865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30865;

Registro30865 crear_registro30865(int id) {
    Registro30865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30865(Registro30865 r) {
    return r.valor + r.id;
}
