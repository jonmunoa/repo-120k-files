// fichero 30049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30049;

Registro30049 crear_registro30049(int id) {
    Registro30049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30049(Registro30049 r) {
    return r.valor + r.id;
}
