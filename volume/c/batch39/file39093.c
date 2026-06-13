// fichero 39093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39093;

Registro39093 crear_registro39093(int id) {
    Registro39093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39093(Registro39093 r) {
    return r.valor + r.id;
}
