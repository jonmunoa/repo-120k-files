// fichero 49769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49769;

Registro49769 crear_registro49769(int id) {
    Registro49769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49769(Registro49769 r) {
    return r.valor + r.id;
}
