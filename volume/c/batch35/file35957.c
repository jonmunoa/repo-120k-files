// fichero 35957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35957;

Registro35957 crear_registro35957(int id) {
    Registro35957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35957(Registro35957 r) {
    return r.valor + r.id;
}
