// fichero 24745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24745;

Registro24745 crear_registro24745(int id) {
    Registro24745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24745(Registro24745 r) {
    return r.valor + r.id;
}
