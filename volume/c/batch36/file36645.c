// fichero 36645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36645;

Registro36645 crear_registro36645(int id) {
    Registro36645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36645(Registro36645 r) {
    return r.valor + r.id;
}
