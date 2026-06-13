// fichero 52153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52153;

Registro52153 crear_registro52153(int id) {
    Registro52153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52153(Registro52153 r) {
    return r.valor + r.id;
}
