// fichero 11741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11741;

Registro11741 crear_registro11741(int id) {
    Registro11741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11741(Registro11741 r) {
    return r.valor + r.id;
}
