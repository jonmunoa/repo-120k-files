// fichero 48225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48225;

Registro48225 crear_registro48225(int id) {
    Registro48225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48225(Registro48225 r) {
    return r.valor + r.id;
}
