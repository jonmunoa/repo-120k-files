// fichero 19261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19261;

Registro19261 crear_registro19261(int id) {
    Registro19261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19261(Registro19261 r) {
    return r.valor + r.id;
}
