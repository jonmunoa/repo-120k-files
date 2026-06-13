// fichero 35973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35973;

Registro35973 crear_registro35973(int id) {
    Registro35973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35973(Registro35973 r) {
    return r.valor + r.id;
}
