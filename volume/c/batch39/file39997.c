// fichero 39997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39997;

Registro39997 crear_registro39997(int id) {
    Registro39997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39997(Registro39997 r) {
    return r.valor + r.id;
}
