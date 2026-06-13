// fichero 41077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41077;

Registro41077 crear_registro41077(int id) {
    Registro41077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41077(Registro41077 r) {
    return r.valor + r.id;
}
