// fichero 26693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26693;

Registro26693 crear_registro26693(int id) {
    Registro26693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26693(Registro26693 r) {
    return r.valor + r.id;
}
