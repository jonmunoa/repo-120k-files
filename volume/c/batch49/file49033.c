// fichero 49033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49033;

Registro49033 crear_registro49033(int id) {
    Registro49033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49033(Registro49033 r) {
    return r.valor + r.id;
}
