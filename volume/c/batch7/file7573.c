// fichero 7573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7573;

Registro7573 crear_registro7573(int id) {
    Registro7573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7573(Registro7573 r) {
    return r.valor + r.id;
}
