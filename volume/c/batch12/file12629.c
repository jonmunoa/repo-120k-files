// fichero 12629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12629;

Registro12629 crear_registro12629(int id) {
    Registro12629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12629(Registro12629 r) {
    return r.valor + r.id;
}
