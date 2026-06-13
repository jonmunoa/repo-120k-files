// fichero 37629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37629;

Registro37629 crear_registro37629(int id) {
    Registro37629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37629(Registro37629 r) {
    return r.valor + r.id;
}
