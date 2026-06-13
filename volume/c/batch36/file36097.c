// fichero 36097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36097;

Registro36097 crear_registro36097(int id) {
    Registro36097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36097(Registro36097 r) {
    return r.valor + r.id;
}
