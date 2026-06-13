// fichero 46109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46109;

Registro46109 crear_registro46109(int id) {
    Registro46109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46109(Registro46109 r) {
    return r.valor + r.id;
}
