// fichero 18325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18325;

Registro18325 crear_registro18325(int id) {
    Registro18325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18325(Registro18325 r) {
    return r.valor + r.id;
}
