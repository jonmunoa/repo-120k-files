// fichero 47357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47357;

Registro47357 crear_registro47357(int id) {
    Registro47357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47357(Registro47357 r) {
    return r.valor + r.id;
}
