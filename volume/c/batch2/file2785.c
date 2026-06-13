// fichero 2785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2785;

Registro2785 crear_registro2785(int id) {
    Registro2785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2785(Registro2785 r) {
    return r.valor + r.id;
}
