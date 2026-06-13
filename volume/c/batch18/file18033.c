// fichero 18033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18033;

Registro18033 crear_registro18033(int id) {
    Registro18033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18033(Registro18033 r) {
    return r.valor + r.id;
}
