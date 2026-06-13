// fichero 39629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39629;

Registro39629 crear_registro39629(int id) {
    Registro39629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39629(Registro39629 r) {
    return r.valor + r.id;
}
