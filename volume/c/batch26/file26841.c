// fichero 26841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26841;

Registro26841 crear_registro26841(int id) {
    Registro26841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26841(Registro26841 r) {
    return r.valor + r.id;
}
