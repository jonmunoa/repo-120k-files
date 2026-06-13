// fichero 7505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7505;

Registro7505 crear_registro7505(int id) {
    Registro7505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7505(Registro7505 r) {
    return r.valor + r.id;
}
