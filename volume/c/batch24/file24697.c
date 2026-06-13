// fichero 24697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24697;

Registro24697 crear_registro24697(int id) {
    Registro24697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24697(Registro24697 r) {
    return r.valor + r.id;
}
