// fichero 24905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24905;

Registro24905 crear_registro24905(int id) {
    Registro24905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24905(Registro24905 r) {
    return r.valor + r.id;
}
