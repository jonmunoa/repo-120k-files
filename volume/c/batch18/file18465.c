// fichero 18465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18465;

Registro18465 crear_registro18465(int id) {
    Registro18465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18465(Registro18465 r) {
    return r.valor + r.id;
}
