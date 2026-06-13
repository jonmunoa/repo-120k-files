// fichero 40037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40037;

Registro40037 crear_registro40037(int id) {
    Registro40037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40037(Registro40037 r) {
    return r.valor + r.id;
}
