// fichero 8237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8237;

Registro8237 crear_registro8237(int id) {
    Registro8237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8237(Registro8237 r) {
    return r.valor + r.id;
}
