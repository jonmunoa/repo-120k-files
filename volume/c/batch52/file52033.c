// fichero 52033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52033;

Registro52033 crear_registro52033(int id) {
    Registro52033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52033(Registro52033 r) {
    return r.valor + r.id;
}
