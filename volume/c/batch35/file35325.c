// fichero 35325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35325;

Registro35325 crear_registro35325(int id) {
    Registro35325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35325(Registro35325 r) {
    return r.valor + r.id;
}
