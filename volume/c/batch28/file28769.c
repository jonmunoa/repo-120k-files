// fichero 28769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28769;

Registro28769 crear_registro28769(int id) {
    Registro28769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28769(Registro28769 r) {
    return r.valor + r.id;
}
