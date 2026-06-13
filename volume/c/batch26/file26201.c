// fichero 26201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26201;

Registro26201 crear_registro26201(int id) {
    Registro26201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26201(Registro26201 r) {
    return r.valor + r.id;
}
