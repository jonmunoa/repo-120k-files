// fichero 8053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8053;

Registro8053 crear_registro8053(int id) {
    Registro8053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8053(Registro8053 r) {
    return r.valor + r.id;
}
