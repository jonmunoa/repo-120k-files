// fichero 48205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48205;

Registro48205 crear_registro48205(int id) {
    Registro48205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48205(Registro48205 r) {
    return r.valor + r.id;
}
