// fichero 18657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18657;

Registro18657 crear_registro18657(int id) {
    Registro18657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18657(Registro18657 r) {
    return r.valor + r.id;
}
