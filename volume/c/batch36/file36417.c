// fichero 36417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36417;

Registro36417 crear_registro36417(int id) {
    Registro36417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36417(Registro36417 r) {
    return r.valor + r.id;
}
