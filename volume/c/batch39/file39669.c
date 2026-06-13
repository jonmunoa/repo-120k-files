// fichero 39669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39669;

Registro39669 crear_registro39669(int id) {
    Registro39669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39669(Registro39669 r) {
    return r.valor + r.id;
}
