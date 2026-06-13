// fichero 31201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31201;

Registro31201 crear_registro31201(int id) {
    Registro31201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31201(Registro31201 r) {
    return r.valor + r.id;
}
