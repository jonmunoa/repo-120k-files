// fichero 48953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48953;

Registro48953 crear_registro48953(int id) {
    Registro48953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48953(Registro48953 r) {
    return r.valor + r.id;
}
