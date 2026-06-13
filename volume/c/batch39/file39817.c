// fichero 39817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39817;

Registro39817 crear_registro39817(int id) {
    Registro39817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39817(Registro39817 r) {
    return r.valor + r.id;
}
