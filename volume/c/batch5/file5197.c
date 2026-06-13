// fichero 5197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5197;

Registro5197 crear_registro5197(int id) {
    Registro5197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5197(Registro5197 r) {
    return r.valor + r.id;
}
