// fichero 30289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30289;

Registro30289 crear_registro30289(int id) {
    Registro30289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30289(Registro30289 r) {
    return r.valor + r.id;
}
