// fichero 47801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47801;

Registro47801 crear_registro47801(int id) {
    Registro47801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47801(Registro47801 r) {
    return r.valor + r.id;
}
