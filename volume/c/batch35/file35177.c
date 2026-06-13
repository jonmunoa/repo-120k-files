// fichero 35177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35177;

Registro35177 crear_registro35177(int id) {
    Registro35177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35177(Registro35177 r) {
    return r.valor + r.id;
}
