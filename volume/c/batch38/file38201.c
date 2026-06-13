// fichero 38201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38201;

Registro38201 crear_registro38201(int id) {
    Registro38201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38201(Registro38201 r) {
    return r.valor + r.id;
}
