// fichero 44925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44925;

Registro44925 crear_registro44925(int id) {
    Registro44925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44925(Registro44925 r) {
    return r.valor + r.id;
}
