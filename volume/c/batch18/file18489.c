// fichero 18489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18489;

Registro18489 crear_registro18489(int id) {
    Registro18489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18489(Registro18489 r) {
    return r.valor + r.id;
}
