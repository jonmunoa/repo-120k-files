// fichero 17925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17925;

Registro17925 crear_registro17925(int id) {
    Registro17925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17925(Registro17925 r) {
    return r.valor + r.id;
}
