// fichero 5145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5145;

Registro5145 crear_registro5145(int id) {
    Registro5145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5145(Registro5145 r) {
    return r.valor + r.id;
}
