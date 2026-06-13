// fichero 5093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5093;

Registro5093 crear_registro5093(int id) {
    Registro5093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5093(Registro5093 r) {
    return r.valor + r.id;
}
