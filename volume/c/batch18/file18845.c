// fichero 18845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18845;

Registro18845 crear_registro18845(int id) {
    Registro18845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18845(Registro18845 r) {
    return r.valor + r.id;
}
