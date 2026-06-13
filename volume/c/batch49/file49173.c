// fichero 49173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49173;

Registro49173 crear_registro49173(int id) {
    Registro49173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49173(Registro49173 r) {
    return r.valor + r.id;
}
