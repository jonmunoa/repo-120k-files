// fichero 36453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36453;

Registro36453 crear_registro36453(int id) {
    Registro36453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36453(Registro36453 r) {
    return r.valor + r.id;
}
