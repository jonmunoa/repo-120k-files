// fichero 34889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34889;

Registro34889 crear_registro34889(int id) {
    Registro34889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34889(Registro34889 r) {
    return r.valor + r.id;
}
