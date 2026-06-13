// fichero 37389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37389;

Registro37389 crear_registro37389(int id) {
    Registro37389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37389(Registro37389 r) {
    return r.valor + r.id;
}
