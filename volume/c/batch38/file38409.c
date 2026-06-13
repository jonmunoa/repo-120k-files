// fichero 38409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38409;

Registro38409 crear_registro38409(int id) {
    Registro38409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38409(Registro38409 r) {
    return r.valor + r.id;
}
