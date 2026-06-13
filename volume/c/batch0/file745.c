// fichero 745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro745;

Registro745 crear_registro745(int id) {
    Registro745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro745(Registro745 r) {
    return r.valor + r.id;
}
