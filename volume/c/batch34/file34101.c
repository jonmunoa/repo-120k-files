// fichero 34101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34101;

Registro34101 crear_registro34101(int id) {
    Registro34101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34101(Registro34101 r) {
    return r.valor + r.id;
}
