// fichero 34229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34229;

Registro34229 crear_registro34229(int id) {
    Registro34229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34229(Registro34229 r) {
    return r.valor + r.id;
}
