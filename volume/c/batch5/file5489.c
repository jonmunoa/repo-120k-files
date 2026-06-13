// fichero 5489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5489;

Registro5489 crear_registro5489(int id) {
    Registro5489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5489(Registro5489 r) {
    return r.valor + r.id;
}
