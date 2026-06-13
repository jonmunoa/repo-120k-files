// fichero 3785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3785;

Registro3785 crear_registro3785(int id) {
    Registro3785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3785(Registro3785 r) {
    return r.valor + r.id;
}
