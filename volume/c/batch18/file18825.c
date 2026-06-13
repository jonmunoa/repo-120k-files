// fichero 18825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18825;

Registro18825 crear_registro18825(int id) {
    Registro18825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18825(Registro18825 r) {
    return r.valor + r.id;
}
