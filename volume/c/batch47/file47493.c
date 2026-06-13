// fichero 47493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47493;

Registro47493 crear_registro47493(int id) {
    Registro47493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47493(Registro47493 r) {
    return r.valor + r.id;
}
