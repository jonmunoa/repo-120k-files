// fichero 28225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28225;

Registro28225 crear_registro28225(int id) {
    Registro28225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28225(Registro28225 r) {
    return r.valor + r.id;
}
