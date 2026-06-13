// fichero 3437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3437;

Registro3437 crear_registro3437(int id) {
    Registro3437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3437(Registro3437 r) {
    return r.valor + r.id;
}
