// fichero 34973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34973;

Registro34973 crear_registro34973(int id) {
    Registro34973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34973(Registro34973 r) {
    return r.valor + r.id;
}
