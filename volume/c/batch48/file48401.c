// fichero 48401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48401;

Registro48401 crear_registro48401(int id) {
    Registro48401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48401(Registro48401 r) {
    return r.valor + r.id;
}
