// fichero 49317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49317;

Registro49317 crear_registro49317(int id) {
    Registro49317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49317(Registro49317 r) {
    return r.valor + r.id;
}
