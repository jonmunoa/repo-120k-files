// fichero 5885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5885;

Registro5885 crear_registro5885(int id) {
    Registro5885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5885(Registro5885 r) {
    return r.valor + r.id;
}
