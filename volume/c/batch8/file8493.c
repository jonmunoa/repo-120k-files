// fichero 8493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8493;

Registro8493 crear_registro8493(int id) {
    Registro8493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8493(Registro8493 r) {
    return r.valor + r.id;
}
