// fichero 12625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12625;

Registro12625 crear_registro12625(int id) {
    Registro12625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12625(Registro12625 r) {
    return r.valor + r.id;
}
