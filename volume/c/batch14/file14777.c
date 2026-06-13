// fichero 14777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14777;

Registro14777 crear_registro14777(int id) {
    Registro14777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14777(Registro14777 r) {
    return r.valor + r.id;
}
