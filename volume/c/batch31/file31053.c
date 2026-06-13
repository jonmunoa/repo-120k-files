// fichero 31053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31053;

Registro31053 crear_registro31053(int id) {
    Registro31053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31053(Registro31053 r) {
    return r.valor + r.id;
}
