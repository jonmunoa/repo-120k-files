// fichero 41833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41833;

Registro41833 crear_registro41833(int id) {
    Registro41833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41833(Registro41833 r) {
    return r.valor + r.id;
}
