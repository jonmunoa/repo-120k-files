// fichero 35405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35405;

Registro35405 crear_registro35405(int id) {
    Registro35405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35405(Registro35405 r) {
    return r.valor + r.id;
}
