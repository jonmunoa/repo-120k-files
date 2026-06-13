// fichero 39577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39577;

Registro39577 crear_registro39577(int id) {
    Registro39577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39577(Registro39577 r) {
    return r.valor + r.id;
}
