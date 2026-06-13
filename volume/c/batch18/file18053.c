// fichero 18053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18053;

Registro18053 crear_registro18053(int id) {
    Registro18053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18053(Registro18053 r) {
    return r.valor + r.id;
}
