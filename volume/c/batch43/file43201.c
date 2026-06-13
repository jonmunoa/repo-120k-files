// fichero 43201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43201;

Registro43201 crear_registro43201(int id) {
    Registro43201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43201(Registro43201 r) {
    return r.valor + r.id;
}
