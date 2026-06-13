// fichero 24729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24729;

Registro24729 crear_registro24729(int id) {
    Registro24729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24729(Registro24729 r) {
    return r.valor + r.id;
}
