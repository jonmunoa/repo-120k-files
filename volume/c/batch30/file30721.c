// fichero 30721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30721;

Registro30721 crear_registro30721(int id) {
    Registro30721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30721(Registro30721 r) {
    return r.valor + r.id;
}
