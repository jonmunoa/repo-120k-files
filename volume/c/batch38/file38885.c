// fichero 38885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38885;

Registro38885 crear_registro38885(int id) {
    Registro38885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38885(Registro38885 r) {
    return r.valor + r.id;
}
