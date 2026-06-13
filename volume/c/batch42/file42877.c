// fichero 42877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42877;

Registro42877 crear_registro42877(int id) {
    Registro42877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42877(Registro42877 r) {
    return r.valor + r.id;
}
