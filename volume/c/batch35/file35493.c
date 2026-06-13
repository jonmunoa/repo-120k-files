// fichero 35493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35493;

Registro35493 crear_registro35493(int id) {
    Registro35493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35493(Registro35493 r) {
    return r.valor + r.id;
}
