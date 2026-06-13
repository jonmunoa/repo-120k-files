// fichero 18841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18841;

Registro18841 crear_registro18841(int id) {
    Registro18841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18841(Registro18841 r) {
    return r.valor + r.id;
}
