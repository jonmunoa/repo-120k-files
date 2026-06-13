// fichero 35769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35769;

Registro35769 crear_registro35769(int id) {
    Registro35769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35769(Registro35769 r) {
    return r.valor + r.id;
}
