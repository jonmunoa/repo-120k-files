// fichero 28745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28745;

Registro28745 crear_registro28745(int id) {
    Registro28745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28745(Registro28745 r) {
    return r.valor + r.id;
}
