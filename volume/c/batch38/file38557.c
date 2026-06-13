// fichero 38557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38557;

Registro38557 crear_registro38557(int id) {
    Registro38557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38557(Registro38557 r) {
    return r.valor + r.id;
}
