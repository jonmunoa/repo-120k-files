// fichero 40125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40125;

Registro40125 crear_registro40125(int id) {
    Registro40125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40125(Registro40125 r) {
    return r.valor + r.id;
}
