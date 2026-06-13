// fichero 54881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54881;

Registro54881 crear_registro54881(int id) {
    Registro54881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54881(Registro54881 r) {
    return r.valor + r.id;
}
