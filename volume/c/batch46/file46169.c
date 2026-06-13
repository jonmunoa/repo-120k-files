// fichero 46169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46169;

Registro46169 crear_registro46169(int id) {
    Registro46169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46169(Registro46169 r) {
    return r.valor + r.id;
}
