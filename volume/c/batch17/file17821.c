// fichero 17821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17821;

Registro17821 crear_registro17821(int id) {
    Registro17821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17821(Registro17821 r) {
    return r.valor + r.id;
}
