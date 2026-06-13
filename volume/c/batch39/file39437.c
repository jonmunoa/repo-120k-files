// fichero 39437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39437;

Registro39437 crear_registro39437(int id) {
    Registro39437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39437(Registro39437 r) {
    return r.valor + r.id;
}
