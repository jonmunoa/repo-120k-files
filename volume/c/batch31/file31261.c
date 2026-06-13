// fichero 31261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31261;

Registro31261 crear_registro31261(int id) {
    Registro31261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31261(Registro31261 r) {
    return r.valor + r.id;
}
