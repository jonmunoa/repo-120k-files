// fichero 49377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49377;

Registro49377 crear_registro49377(int id) {
    Registro49377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49377(Registro49377 r) {
    return r.valor + r.id;
}
