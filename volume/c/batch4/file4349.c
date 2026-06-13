// fichero 4349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4349;

Registro4349 crear_registro4349(int id) {
    Registro4349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4349(Registro4349 r) {
    return r.valor + r.id;
}
