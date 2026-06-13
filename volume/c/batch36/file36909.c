// fichero 36909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36909;

Registro36909 crear_registro36909(int id) {
    Registro36909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36909(Registro36909 r) {
    return r.valor + r.id;
}
