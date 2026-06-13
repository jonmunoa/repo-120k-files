// fichero 35581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35581;

Registro35581 crear_registro35581(int id) {
    Registro35581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35581(Registro35581 r) {
    return r.valor + r.id;
}
