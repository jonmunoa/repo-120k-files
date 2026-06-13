// fichero 22785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22785;

Registro22785 crear_registro22785(int id) {
    Registro22785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22785(Registro22785 r) {
    return r.valor + r.id;
}
