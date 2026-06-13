// fichero 4661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4661;

Registro4661 crear_registro4661(int id) {
    Registro4661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4661(Registro4661 r) {
    return r.valor + r.id;
}
