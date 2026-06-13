// fichero 11761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11761;

Registro11761 crear_registro11761(int id) {
    Registro11761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11761(Registro11761 r) {
    return r.valor + r.id;
}
