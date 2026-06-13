// fichero 6625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6625;

Registro6625 crear_registro6625(int id) {
    Registro6625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6625(Registro6625 r) {
    return r.valor + r.id;
}
