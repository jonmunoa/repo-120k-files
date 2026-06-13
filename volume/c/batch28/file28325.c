// fichero 28325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28325;

Registro28325 crear_registro28325(int id) {
    Registro28325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28325(Registro28325 r) {
    return r.valor + r.id;
}
