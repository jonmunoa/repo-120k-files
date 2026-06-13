// fichero 41053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41053;

Registro41053 crear_registro41053(int id) {
    Registro41053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41053(Registro41053 r) {
    return r.valor + r.id;
}
