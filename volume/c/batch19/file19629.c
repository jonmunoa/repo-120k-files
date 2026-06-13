// fichero 19629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19629;

Registro19629 crear_registro19629(int id) {
    Registro19629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19629(Registro19629 r) {
    return r.valor + r.id;
}
