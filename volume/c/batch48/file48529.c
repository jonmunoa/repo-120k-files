// fichero 48529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48529;

Registro48529 crear_registro48529(int id) {
    Registro48529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48529(Registro48529 r) {
    return r.valor + r.id;
}
