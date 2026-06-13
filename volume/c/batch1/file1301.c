// fichero 1301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1301;

Registro1301 crear_registro1301(int id) {
    Registro1301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1301(Registro1301 r) {
    return r.valor + r.id;
}
