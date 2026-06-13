// fichero 34153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34153;

Registro34153 crear_registro34153(int id) {
    Registro34153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34153(Registro34153 r) {
    return r.valor + r.id;
}
