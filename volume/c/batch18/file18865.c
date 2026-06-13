// fichero 18865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18865;

Registro18865 crear_registro18865(int id) {
    Registro18865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18865(Registro18865 r) {
    return r.valor + r.id;
}
