// fichero 36517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36517;

Registro36517 crear_registro36517(int id) {
    Registro36517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36517(Registro36517 r) {
    return r.valor + r.id;
}
