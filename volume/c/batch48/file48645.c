// fichero 48645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48645;

Registro48645 crear_registro48645(int id) {
    Registro48645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48645(Registro48645 r) {
    return r.valor + r.id;
}
