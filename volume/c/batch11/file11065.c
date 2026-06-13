// fichero 11065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11065;

Registro11065 crear_registro11065(int id) {
    Registro11065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11065(Registro11065 r) {
    return r.valor + r.id;
}
