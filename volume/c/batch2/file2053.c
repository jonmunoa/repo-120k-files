// fichero 2053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2053;

Registro2053 crear_registro2053(int id) {
    Registro2053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2053(Registro2053 r) {
    return r.valor + r.id;
}
