// fichero 49797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49797;

Registro49797 crear_registro49797(int id) {
    Registro49797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49797(Registro49797 r) {
    return r.valor + r.id;
}
