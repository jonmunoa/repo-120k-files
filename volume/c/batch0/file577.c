// fichero 577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro577;

Registro577 crear_registro577(int id) {
    Registro577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro577(Registro577 r) {
    return r.valor + r.id;
}
