// fichero 26745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26745;

Registro26745 crear_registro26745(int id) {
    Registro26745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26745(Registro26745 r) {
    return r.valor + r.id;
}
