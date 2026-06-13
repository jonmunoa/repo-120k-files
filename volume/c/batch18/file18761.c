// fichero 18761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18761;

Registro18761 crear_registro18761(int id) {
    Registro18761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18761(Registro18761 r) {
    return r.valor + r.id;
}
