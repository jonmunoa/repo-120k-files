// fichero 28321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28321;

Registro28321 crear_registro28321(int id) {
    Registro28321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28321(Registro28321 r) {
    return r.valor + r.id;
}
