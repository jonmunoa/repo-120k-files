// fichero 30929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30929;

Registro30929 crear_registro30929(int id) {
    Registro30929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30929(Registro30929 r) {
    return r.valor + r.id;
}
