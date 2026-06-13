// fichero 24869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24869;

Registro24869 crear_registro24869(int id) {
    Registro24869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24869(Registro24869 r) {
    return r.valor + r.id;
}
