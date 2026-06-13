// fichero 18573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18573;

Registro18573 crear_registro18573(int id) {
    Registro18573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18573(Registro18573 r) {
    return r.valor + r.id;
}
