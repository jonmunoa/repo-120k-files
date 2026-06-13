// fichero 47201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47201;

Registro47201 crear_registro47201(int id) {
    Registro47201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47201(Registro47201 r) {
    return r.valor + r.id;
}
