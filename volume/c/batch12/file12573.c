// fichero 12573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12573;

Registro12573 crear_registro12573(int id) {
    Registro12573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12573(Registro12573 r) {
    return r.valor + r.id;
}
