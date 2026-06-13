// fichero 30953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30953;

Registro30953 crear_registro30953(int id) {
    Registro30953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30953(Registro30953 r) {
    return r.valor + r.id;
}
