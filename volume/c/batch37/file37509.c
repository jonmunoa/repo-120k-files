// fichero 37509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37509;

Registro37509 crear_registro37509(int id) {
    Registro37509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37509(Registro37509 r) {
    return r.valor + r.id;
}
