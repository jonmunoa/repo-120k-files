// fichero 47101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47101;

Registro47101 crear_registro47101(int id) {
    Registro47101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47101(Registro47101 r) {
    return r.valor + r.id;
}
