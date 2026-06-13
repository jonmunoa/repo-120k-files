// fichero 48577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48577;

Registro48577 crear_registro48577(int id) {
    Registro48577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48577(Registro48577 r) {
    return r.valor + r.id;
}
