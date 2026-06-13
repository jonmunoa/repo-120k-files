// fichero 54677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54677;

Registro54677 crear_registro54677(int id) {
    Registro54677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54677(Registro54677 r) {
    return r.valor + r.id;
}
