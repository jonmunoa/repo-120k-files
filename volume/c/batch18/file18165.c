// fichero 18165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18165;

Registro18165 crear_registro18165(int id) {
    Registro18165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18165(Registro18165 r) {
    return r.valor + r.id;
}
