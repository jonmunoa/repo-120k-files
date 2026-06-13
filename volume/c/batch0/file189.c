// fichero 189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro189;

Registro189 crear_registro189(int id) {
    Registro189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro189(Registro189 r) {
    return r.valor + r.id;
}
