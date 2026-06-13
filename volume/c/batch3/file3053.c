// fichero 3053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3053;

Registro3053 crear_registro3053(int id) {
    Registro3053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3053(Registro3053 r) {
    return r.valor + r.id;
}
