// fichero 38117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38117;

Registro38117 crear_registro38117(int id) {
    Registro38117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38117(Registro38117 r) {
    return r.valor + r.id;
}
