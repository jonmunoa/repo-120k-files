// fichero 18893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18893;

Registro18893 crear_registro18893(int id) {
    Registro18893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18893(Registro18893 r) {
    return r.valor + r.id;
}
