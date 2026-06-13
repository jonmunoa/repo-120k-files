// fichero 17645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17645;

Registro17645 crear_registro17645(int id) {
    Registro17645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17645(Registro17645 r) {
    return r.valor + r.id;
}
