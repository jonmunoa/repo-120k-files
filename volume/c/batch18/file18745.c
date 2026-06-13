// fichero 18745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18745;

Registro18745 crear_registro18745(int id) {
    Registro18745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18745(Registro18745 r) {
    return r.valor + r.id;
}
