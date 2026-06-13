// fichero 24549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24549;

Registro24549 crear_registro24549(int id) {
    Registro24549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24549(Registro24549 r) {
    return r.valor + r.id;
}
