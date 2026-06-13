// fichero 18049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18049;

Registro18049 crear_registro18049(int id) {
    Registro18049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18049(Registro18049 r) {
    return r.valor + r.id;
}
