// fichero 26565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26565;

Registro26565 crear_registro26565(int id) {
    Registro26565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26565(Registro26565 r) {
    return r.valor + r.id;
}
