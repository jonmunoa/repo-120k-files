// fichero 37261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37261;

Registro37261 crear_registro37261(int id) {
    Registro37261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37261(Registro37261 r) {
    return r.valor + r.id;
}
