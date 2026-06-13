// fichero 3517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3517;

Registro3517 crear_registro3517(int id) {
    Registro3517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3517(Registro3517 r) {
    return r.valor + r.id;
}
