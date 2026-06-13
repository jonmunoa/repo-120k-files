// fichero 30505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30505;

Registro30505 crear_registro30505(int id) {
    Registro30505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30505(Registro30505 r) {
    return r.valor + r.id;
}
