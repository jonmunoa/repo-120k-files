// fichero 42405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42405;

Registro42405 crear_registro42405(int id) {
    Registro42405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42405(Registro42405 r) {
    return r.valor + r.id;
}
