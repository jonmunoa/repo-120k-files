// fichero 26629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26629;

Registro26629 crear_registro26629(int id) {
    Registro26629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26629(Registro26629 r) {
    return r.valor + r.id;
}
