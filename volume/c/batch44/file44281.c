// fichero 44281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44281;

Registro44281 crear_registro44281(int id) {
    Registro44281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44281(Registro44281 r) {
    return r.valor + r.id;
}
