// fichero 41745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41745;

Registro41745 crear_registro41745(int id) {
    Registro41745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41745(Registro41745 r) {
    return r.valor + r.id;
}
