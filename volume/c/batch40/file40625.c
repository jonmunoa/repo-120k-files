// fichero 40625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40625;

Registro40625 crear_registro40625(int id) {
    Registro40625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40625(Registro40625 r) {
    return r.valor + r.id;
}
