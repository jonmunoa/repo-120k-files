// fichero 18669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18669;

Registro18669 crear_registro18669(int id) {
    Registro18669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18669(Registro18669 r) {
    return r.valor + r.id;
}
