// fichero 14033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14033;

Registro14033 crear_registro14033(int id) {
    Registro14033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14033(Registro14033 r) {
    return r.valor + r.id;
}
