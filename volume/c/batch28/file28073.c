// fichero 28073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28073;

Registro28073 crear_registro28073(int id) {
    Registro28073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28073(Registro28073 r) {
    return r.valor + r.id;
}
