// fichero 46645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46645;

Registro46645 crear_registro46645(int id) {
    Registro46645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46645(Registro46645 r) {
    return r.valor + r.id;
}
