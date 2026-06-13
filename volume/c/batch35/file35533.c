// fichero 35533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35533;

Registro35533 crear_registro35533(int id) {
    Registro35533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35533(Registro35533 r) {
    return r.valor + r.id;
}
