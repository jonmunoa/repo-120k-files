// fichero 24153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24153;

Registro24153 crear_registro24153(int id) {
    Registro24153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24153(Registro24153 r) {
    return r.valor + r.id;
}
