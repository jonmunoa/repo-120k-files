// fichero 18569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18569;

Registro18569 crear_registro18569(int id) {
    Registro18569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18569(Registro18569 r) {
    return r.valor + r.id;
}
