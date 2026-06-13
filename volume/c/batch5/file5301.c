// fichero 5301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5301;

Registro5301 crear_registro5301(int id) {
    Registro5301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5301(Registro5301 r) {
    return r.valor + r.id;
}
