// fichero 18493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18493;

Registro18493 crear_registro18493(int id) {
    Registro18493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18493(Registro18493 r) {
    return r.valor + r.id;
}
