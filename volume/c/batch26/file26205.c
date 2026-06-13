// fichero 26205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26205;

Registro26205 crear_registro26205(int id) {
    Registro26205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26205(Registro26205 r) {
    return r.valor + r.id;
}
