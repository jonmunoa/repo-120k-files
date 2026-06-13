// fichero 35189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35189;

Registro35189 crear_registro35189(int id) {
    Registro35189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35189(Registro35189 r) {
    return r.valor + r.id;
}
