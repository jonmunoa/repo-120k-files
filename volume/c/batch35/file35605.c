// fichero 35605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35605;

Registro35605 crear_registro35605(int id) {
    Registro35605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35605(Registro35605 r) {
    return r.valor + r.id;
}
