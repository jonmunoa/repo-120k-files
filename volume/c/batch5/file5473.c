// fichero 5473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5473;

Registro5473 crear_registro5473(int id) {
    Registro5473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5473(Registro5473 r) {
    return r.valor + r.id;
}
