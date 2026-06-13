// fichero 54617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54617;

Registro54617 crear_registro54617(int id) {
    Registro54617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54617(Registro54617 r) {
    return r.valor + r.id;
}
