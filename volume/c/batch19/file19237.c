// fichero 19237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19237;

Registro19237 crear_registro19237(int id) {
    Registro19237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19237(Registro19237 r) {
    return r.valor + r.id;
}
