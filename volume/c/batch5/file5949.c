// fichero 5949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5949;

Registro5949 crear_registro5949(int id) {
    Registro5949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5949(Registro5949 r) {
    return r.valor + r.id;
}
