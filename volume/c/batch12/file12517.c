// fichero 12517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12517;

Registro12517 crear_registro12517(int id) {
    Registro12517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12517(Registro12517 r) {
    return r.valor + r.id;
}
