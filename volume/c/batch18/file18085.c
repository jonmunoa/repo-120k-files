// fichero 18085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18085;

Registro18085 crear_registro18085(int id) {
    Registro18085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18085(Registro18085 r) {
    return r.valor + r.id;
}
