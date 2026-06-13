// fichero 42057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42057;

Registro42057 crear_registro42057(int id) {
    Registro42057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42057(Registro42057 r) {
    return r.valor + r.id;
}
