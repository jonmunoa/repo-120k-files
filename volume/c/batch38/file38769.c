// fichero 38769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38769;

Registro38769 crear_registro38769(int id) {
    Registro38769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38769(Registro38769 r) {
    return r.valor + r.id;
}
