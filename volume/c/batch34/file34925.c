// fichero 34925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34925;

Registro34925 crear_registro34925(int id) {
    Registro34925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34925(Registro34925 r) {
    return r.valor + r.id;
}
