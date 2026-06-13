// fichero 39961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39961;

Registro39961 crear_registro39961(int id) {
    Registro39961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39961(Registro39961 r) {
    return r.valor + r.id;
}
