// fichero 5149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5149;

Registro5149 crear_registro5149(int id) {
    Registro5149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5149(Registro5149 r) {
    return r.valor + r.id;
}
