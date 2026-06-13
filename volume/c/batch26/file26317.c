// fichero 26317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26317;

Registro26317 crear_registro26317(int id) {
    Registro26317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26317(Registro26317 r) {
    return r.valor + r.id;
}
