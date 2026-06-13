// fichero 35193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35193;

Registro35193 crear_registro35193(int id) {
    Registro35193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35193(Registro35193 r) {
    return r.valor + r.id;
}
