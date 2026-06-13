// fichero 24529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24529;

Registro24529 crear_registro24529(int id) {
    Registro24529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24529(Registro24529 r) {
    return r.valor + r.id;
}
