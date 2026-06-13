// fichero 26665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26665;

Registro26665 crear_registro26665(int id) {
    Registro26665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26665(Registro26665 r) {
    return r.valor + r.id;
}
