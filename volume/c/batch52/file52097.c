// fichero 52097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52097;

Registro52097 crear_registro52097(int id) {
    Registro52097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52097(Registro52097 r) {
    return r.valor + r.id;
}
