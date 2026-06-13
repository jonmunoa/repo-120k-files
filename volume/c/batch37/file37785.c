// fichero 37785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37785;

Registro37785 crear_registro37785(int id) {
    Registro37785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37785(Registro37785 r) {
    return r.valor + r.id;
}
