// fichero 18769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18769;

Registro18769 crear_registro18769(int id) {
    Registro18769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18769(Registro18769 r) {
    return r.valor + r.id;
}
