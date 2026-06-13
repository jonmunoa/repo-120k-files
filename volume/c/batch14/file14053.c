// fichero 14053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14053;

Registro14053 crear_registro14053(int id) {
    Registro14053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14053(Registro14053 r) {
    return r.valor + r.id;
}
