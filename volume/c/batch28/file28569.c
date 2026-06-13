// fichero 28569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28569;

Registro28569 crear_registro28569(int id) {
    Registro28569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28569(Registro28569 r) {
    return r.valor + r.id;
}
