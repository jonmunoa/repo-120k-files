// fichero 35925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35925;

Registro35925 crear_registro35925(int id) {
    Registro35925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35925(Registro35925 r) {
    return r.valor + r.id;
}
