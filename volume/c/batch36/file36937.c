// fichero 36937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36937;

Registro36937 crear_registro36937(int id) {
    Registro36937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36937(Registro36937 r) {
    return r.valor + r.id;
}
