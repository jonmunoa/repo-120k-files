// fichero 3853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3853;

Registro3853 crear_registro3853(int id) {
    Registro3853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3853(Registro3853 r) {
    return r.valor + r.id;
}
