// fichero 47529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47529;

Registro47529 crear_registro47529(int id) {
    Registro47529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47529(Registro47529 r) {
    return r.valor + r.id;
}
