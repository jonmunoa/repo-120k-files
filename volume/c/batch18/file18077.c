// fichero 18077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18077;

Registro18077 crear_registro18077(int id) {
    Registro18077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18077(Registro18077 r) {
    return r.valor + r.id;
}
