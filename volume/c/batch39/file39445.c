// fichero 39445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39445;

Registro39445 crear_registro39445(int id) {
    Registro39445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39445(Registro39445 r) {
    return r.valor + r.id;
}
