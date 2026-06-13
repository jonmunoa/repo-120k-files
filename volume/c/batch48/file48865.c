// fichero 48865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48865;

Registro48865 crear_registro48865(int id) {
    Registro48865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48865(Registro48865 r) {
    return r.valor + r.id;
}
