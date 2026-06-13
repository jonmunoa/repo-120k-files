// fichero 39177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39177;

Registro39177 crear_registro39177(int id) {
    Registro39177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39177(Registro39177 r) {
    return r.valor + r.id;
}
