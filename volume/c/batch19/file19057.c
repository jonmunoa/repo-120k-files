// fichero 19057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19057;

Registro19057 crear_registro19057(int id) {
    Registro19057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19057(Registro19057 r) {
    return r.valor + r.id;
}
