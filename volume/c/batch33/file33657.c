// fichero 33657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33657;

Registro33657 crear_registro33657(int id) {
    Registro33657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33657(Registro33657 r) {
    return r.valor + r.id;
}
