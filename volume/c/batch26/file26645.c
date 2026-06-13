// fichero 26645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26645;

Registro26645 crear_registro26645(int id) {
    Registro26645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26645(Registro26645 r) {
    return r.valor + r.id;
}
